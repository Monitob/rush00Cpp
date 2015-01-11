

#ifndef INTERFACE_H
#define INTERFACE_H


#include <curses.h>
#include <iostream>
#include "Enemy.class.hpp"
#include "Ship.class.hpp"

class Interface {

private:
  std::string _name;

public:
  Interface();
  Interface(std::string name);
  Interface(Interface const & src);
  ~Interface();
  Interface & operator=(Interface const & rhs);
  void draw_char(WINDOW *win, Character const  & character, char c);
  std::string getName() const;
};
std::ostream & operator<<(std::ostream & o, Interface const & f);

#endif
