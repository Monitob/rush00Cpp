
#include <iostream>
#include "Ship.class.hpp"
#include "Character.class.hpp"

Ship::Ship() {
}

Ship::Ship(int x, int y){
  setX(x);
  setY(y);
  shipId = Character::getIdCh();
}

Ship::Ship(const Ship & src) : Character(src){
  *this = src;
}

Ship::~Ship(){
  std::cout << "Ship destructed" << std::endl;
}

Ship& Ship::operator=(const Ship& g) {
  ch = g.ch;
  std::cout << "Ship::operator=()\n";
  return *this;
}

std::ostream & operator<<(std::ostream  & out, Ship const & f){
  return out << "Ship " << f.getX() << "/" << f.getY() << std::endl;
}
