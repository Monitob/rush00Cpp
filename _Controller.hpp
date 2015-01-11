#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

# include <iostream>
# include "Character.class.hpp"

class Controller
{
	public:
		Controller();
		Controller(WINDOW * win);
		Controller(Controller const & src);
		~Controller();
		Controller & operator=(Controller const & rhs);
		void init_game(void);
		void check_colision(void);
		void userinput(void);
		void refresh_map(void);
		void draw_char(void);

	private:
		WINDOW 		*win;
		Character	*player;

		//array of enemys
};

std::ostream & operator<<(std::ostream & o, Controller const & i);

#endif /* !CONTROLLER_HPP */
