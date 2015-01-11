
#include <iostream>
#include "Character.class.hpp"

//////Constructors //////
Character::Character(): p_x(10), p_y(10), p_lives(100){
  visible = true;
  dead =  false;
  _idCH = generateId();
}

Character::Character(std::string name, int x, int y): _name(name), p_x(x), p_y(y), p_lives(100){

}

Character::Character(Character const & src){
  *this = src;
}

///DESTRUCTORS//
Character::~Character(){

}

Character & Character::operator=(Character const & rhs){
  if (this != &rhs){
      p_x = rhs.getX();
      p_y = rhs.getY();
  }
  return (*this);
}

void Character::moveRight() {
    p_x += 1;
    if (p_x > MAX_X)
      p_x = MAX_X;
    if (p_x < MIN_X)
        p_x = MIN_X;
    return ;
}
void Character::moveLeft() {
    p_x -= 1;
    if (p_x > MAX_X)
      p_x = MAX_X;
    if (p_x < MIN_X)
        p_x = MIN_X;
    return ;
}

void Character::moveUp() {
    p_y -= 1;
    if (p_x > MAX_X)
      p_x = MAX_X;
    if (p_x < MIN_X)
        p_x = MIN_X;
    return ;
}

void Character::moveDown() {
  p_y += 1;
  if (p_y < MIN_X)
    p_x = MIN_X;
  if (p_y < MIN_Y)
    p_y = MIN_Y;
  return ;
}


////GETTERS ////
int Character::getLives() const {
  return p_lives;
}

std::string Character::getName() const {
  return this->_name;
}

int Character::getX() const {
  return p_x;
}

int Character::getY()  const {
  return p_y;
}

int Character::getIdCh(){
  return _idCH;
}

////SETTERS////
void Character::setX(int const x){
  p_x = x;
  if (p_x > MAX_X)
    p_x = MAX_X;
  if (p_x < MIN_X)
    p_x = MIN_X;
}

void Character::setY(int const y) {
    p_y = y;
    if (p_y > MAX_Y)
      p_y = MAX_X;
    if (p_y < MIN_Y)
      p_y = MIN_Y;
}

void Character::setName(std::string name){
  _name = name;
}

void Character::setDead(){
  dead = true;
}

void Character::receiveAttack(int amount){
  p_lives -= amount;
  if (p_lives < 0)
    p_lives -= amount;
}

void Character::attack(Character  & target){
  target.receiveAttack(1);
}

void Character::move(int const x, int const y){
  setX(x);
  setY(y);
}

int Character::generateId(){
    return s_Id++;
}

std::ostream & operator<<(std::ostream  & out, Character const & f)
{
  return out << f.getName() << " position " << f.getX() << "/" << f.getY() << std::endl;
}

int Character::s_Id = 1;
