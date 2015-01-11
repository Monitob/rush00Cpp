

#ifndef INTERFACE_H
#define INTERFACE_H


#include <curses.h>
#include <iostream>
#include "Character.class.hpp"


class Interface {

private:
  std::string _name;

public:
  Interface();
  Interface(std::string name);
  Interface(Interface const & src);
  ~Interface();
  Interface & operator=(Interface const & rhs);
  void draw(WINDOW * win);
  void draw_char(WINDOW *win, Character const  & ship);
  std::string getName() const;
};
std::ostream & operator<<(std::ostream & o, Interface const & f);

#endif
