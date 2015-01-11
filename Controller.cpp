#include "Controller.hpp"
#include "curses.h"

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
		/* my implementation, don't forget to change this. */
	}
	return (*this);
}

WINDOW * Controller::getField(){
	return this->_win;
}

std::string Controller::getName() const{
	return _name;
}

std::ostream & operator<<(std::ostream & o, Controller const & i)
{
	o << i.getName() << std::endl;
	return (o);
}
