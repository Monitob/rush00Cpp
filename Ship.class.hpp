#include "Character.class.hpp"

#ifndef SHIP_H
# define SHIP_H

#include <iostream>

class Ship: public Character  {

private:
  Character ch;
  int shipId;

public:

  Ship();
  Ship(std::string name, int x, int y);
  Ship(const Ship & src);
  ~Ship();
  Ship& operator=(const Ship& g);

};

std::ostream & operator<<(std::ostream  & out, Ship const & f);

#endif
