#include "Controller.hpp"
#include "curses.h"
#include "Character.class.hpp"

Controller::Controller()
{
}

Controller::Controller(WINDOW * win): win(win){

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
		/* my implementation, don't forget to change this. */
	}
	return (*this);
}

void Controller::init_game(void)
{
	this->player = new Character("player", 10, 10);

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
			mvwaddch(this->win, this->player->getY(), this->player->getX(), ' ');
			this->player->moveLeft();
			break;

		case KEY_RIGHT:
			mvwaddch(this->win, this->player->getY(), this->player->getX(), ' ');
			this->player->moveRight();
			break;

		case KEY_UP:
			mvwaddch(this->win, this->player->getY(), this->player->getX(), ' ');
			this->player->moveUp();
			break;

		case KEY_DOWN:
			mvwaddch(this->win, this->player->getY(), this->player->getX(), ' ');
			this->player->moveDown();
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
	o << "Don't forget to change this.";
	return (o);
}
