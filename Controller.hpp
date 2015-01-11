#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

#include <iostream>
#include <curses.h>
#include "Character.class.hpp"
#include "Ship.class.hpp"

class Controller
{
	public:
		Ship player;
		Controller();
		Controller(WINDOW * win);
		Controller(Controller const & src);
		~Controller();
		std::string getName() const;
		WINDOW * getField();
		void init_game( void );
		void check_colision(void);
		void userinput(void);
		void refresh_map(void);
		void draw_char(WINDOW *win, Character const  & ship);

		Controller & operator=(Controller const & rhs);

	private:
		WINDOW *_win;
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, Controller const & i);

#endif /* !CONTROLLER_HPP */
