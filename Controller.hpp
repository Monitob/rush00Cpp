#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

#include <iostream>
#include <curses.h>
#include "Interface.class.hpp"
#include "Character.class.hpp"
#include "Ship.class.hpp"

class Controller
{
	public:
		Interface * inter;
		Ship * player;

		Controller();
		Controller(WINDOW * win);
		Controller(Interface const & src);
		~Controller();
		std::string getName() const;
		Controller & operator=(Controller const & rhs);

		WINDOW * getField();
		int userinput(void);
		void draw_char(WINDOW *win, Character const  & ship);

		WINDOW* getWin();
		void initGame();

	private:
		WINDOW *_win;
		std::string _name;
		int _x;
		int _y;
};

std::ostream & operator<<(std::ostream & o, Controller const & i);

#endif /* !CONTROLLER_HPP */
