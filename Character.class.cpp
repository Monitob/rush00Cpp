
#include "Character.class.hpp"


Character::Character(): p_x(10), p_y(10), p_lives(100){
  visible = true;
  dead =  true;
  this->_idCH = generateId();
}

Character::Character(std::string name, int x, int y): _name(name) p_x(x), p_y(y), p_lives(100){

}

Character::Character(Character const & src){
  *this = src;
}

Character::~Character(){

}

Character & Character::operator=(Character const & rhs){
  if (this != &rhs){
      p_x = rhs.getX();
      p_y = rhs.getY();
  }
  return (*this);
}

Character & Character::operator-=(Character const & rhs){
  if (this != &rhs){
      p_lives = rhs.getLives();
  }
  return (*this);
}

int Character::getLives(){
  return p_lives;
}

void Character::receiveAttack(int amount){
  p_lives -= amount
  if (p_lives < 0)
    p_lives -= amount;
}

void Character::attack(Character const & target){
  target.receiveAttack(1);
}

int Character::getX() const {
  return p_x;
}

int Character::getY()  const {
  return p_y;
}

void Character::setX(int x) const {
  p_x = x;
  if (p_x > MAX_X)
    p_x = MAX_X;
  if (p_x < MIN_X)
    p_x = MIN_X;
}

void Character::setY(int y){
  p_y = y;
  if (p_y > MAX_Y)
    p_y = MAX_X;
  if (p_y < MIN_Y)
    p_y = y;
}

int Character::getIdCh(){
  return _idCH;
}

int Character::generateId(){
    return s_Id++;
}

int Character::s_Id = 1;
