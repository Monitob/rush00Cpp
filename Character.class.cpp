
#include <iostream>
#include "Character.class.hpp"

//////Constructors //////
Character::Character(): p_x(10), p_y(10), p_lives(100){
  p_visible = true;
  p_dead =  false;
  _idCH = generateId();
}

Character::Character(std::string name, int x, int y): p_name(name), p_x(x), p_y(y), p_lives(100){

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
  if ((p_x + 1) < (MAX_X - 1))
    p_x += 1;
  return ;
}
void Character::moveLeft() {
  if ((p_x - 1) > MIN_X)
    p_x -= 1;
  return ;
}

void Character::moveUp() {
  if ((p_y - 1) > (MIN_Y + 1))
    p_y -= 1;
  return ;
}

void Character::moveDown() {
  if ((p_y + 1) < (MAX_Y - 1))
    p_y += 1;
  return ;
}


////GETTERS ////
int Character::getLives() const {
  return p_lives;
}

std::string Character::getName() const {
  return this->p_name;
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
  p_name = name;
}

void Character::setIsDead(){
  p_dead = true;
}

bool Character::isDead()
{
  return p_dead;
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
