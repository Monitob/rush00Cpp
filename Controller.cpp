#include <iostream>
#include <curses.h>
#include <unistd.h>
#include "Interface.class.hpp"
#include "Controller.hpp"
#include "Character.class.hpp"
#include "Ship.class.hpp"
#include "Enemy.class.hpp"

Controller::Controller()
{
	initscr();
	noecho();
	curs_set(FALSE);
	_win = newwin(MAX_Y , MAX_X, 2, 0);
	keypad(stdscr, TRUE);
	//mvwprintw(_win, 1, 1, "Field");
	_name = "Shooter Game Win";
	box(_win, 0, 0);
	nodelay(stdscr, TRUE);
	//sleep(1);
	inter = new Interface;
	player = new Ship;
	initGame();
}

WINDOW* Controller::getWin(){
	return _win;
}

void Controller::initGame(){
	int endGame;
	int timer = 0;

	endGame = 42;
	Enemy *e = new Enemy();
	while (endGame != 113){
		endGame = userinput();
		if(timer++ % 5 == 0)
		{
			inter->draw_char(_win, *e, ' ');
			e->move((e->getX() - 1), e->getY());
			if(!e->isDead())
				inter->draw_char(_win, *e, 'X');
		}
		inter->draw_char(_win, *player, '@');
		wrefresh(_win);
		usleep(20000);
	}
}

Controller & Controller::operator=(Controller const & rhs) {
	if (this != &rhs)
	{
			inter = rhs.inter;
	}
	return (*this);
}


Controller::Controller(WINDOW * win): _win(win){
	_name = "Shooter Game Win";
}

Controller::Controller(Interface const & src)
{
	*this = src;
}

Controller::~Controller()
{
	delwin(_win);
	endwin();
}

WINDOW * Controller::getField(){
	return _win;
}

std::string Controller::getName() const{
	return _name;
}

int Controller::userinput(void)
{
	int ch = 42;

	ch = getch();
	switch(ch)
	{
		case KEY_LEFT:
			mvwaddch(_win, player->getY(), player->getX(), ' ');
			player->moveLeft();
			return 0;

		case KEY_RIGHT:
			mvwaddch(_win, player->getY(), player->getX(), ' ');
			player->moveRight();
			return 1;

		case KEY_UP:
			mvwaddch(_win, player->getY(), player->getX(), ' ');
			player->moveUp();
			return 2;

		case KEY_DOWN:
			mvwaddch(_win, player->getY(), player->getX(), ' ');
			player->moveDown();
			return 3;
		case 32:
			return 4;
		case 81:
			return 5;
	}
	return ch;
}

void Controller::draw_char(WINDOW *win, Character const  & ship) {
	int x;
	int y;

	x = ship.getX();
	y = ship.getY();
	mvwaddch(win, y, x, '@');
}

std::ostream & operator<<(std::ostream & o, Controller const & i)
{
	o << i.getName() << std::endl;
	return (o);
}
