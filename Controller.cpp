#include "Controller.hpp"
#include "curses.h"
#include "Character.class.hpp"
#include "Ship.class.hpp"

Controller::Controller()
{
	_name = "Shooter Game Win";
}

Controller::Controller(WINDOW * win): _win(win){
	_name = "Shooter Game Win";
}

Controller::Controller(Controller const & src)
{
	*this = src;
}

Controller::~Controller()
{
}

Controller & Controller::operator=(Controller const & rhs)
{
	if (this != &rhs)
	{
		player = rhs.player;
	}
	return (*this);
}

WINDOW * Controller::getField(){
	return _win;
}

std::string Controller::getName() const{
	return _name;
}

void Controller::init_game(void)
{
	Ship player("player", 10, 10);
}

void Controller::check_colision(void)
{

}

void Controller::userinput(void)
{
	int ch = 42;

	ch = getch();
	switch(ch)
	{
		case KEY_LEFT:
			mvwaddch(_win, player.getY(), player.getX(), ' ');
			player.moveLeft();
			break;

		case KEY_RIGHT:
			mvwaddch(_win, player.getY(), player.getX(), ' ');
			player.moveRight();
			break;

		case KEY_UP:
			mvwaddch(_win, player.getY(), player.getX(), ' ');
			player.moveUp();
			break;

		case KEY_DOWN:
			mvwaddch(_win, player.getY(), player.getX(), ' ');
			player.moveDown();
			break;
		case 32:
			break;
	}
}

void Controller::refresh_map(void)
{

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
