#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

#include <iostream>
#include <curses.h>

class Controller
{
	public:
		Controller();
		Controller(WINDOW * win);
		Controller(Controller const & src);
		~Controller();
		std::string getName() const;
		WINDOW * getField();

		Controller & operator=(Controller const & rhs);

	private:
		WINDOW *_win;
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, Controller const & i);

#endif /* !CONTROLLER_HPP */
