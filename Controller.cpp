#include "Controller.hpp"
#include "curses.h"

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

std::ostream & operator<<(std::ostream & o, Controller const & i)
{
	o << "Don't forget to change this.";
	return (o);
}
