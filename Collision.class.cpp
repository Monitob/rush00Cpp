
#include <iostream>
#include "Collision.class.hpp"


Collision::Collision(){
  p_x = 0;
  p_y = 0;
  _idCH = c_Id++;
  visible = true;
  touch = false;
  shoot = false;
}

Collision::Collision(int x, int y){
  p_x = x;
  p_y = y;
  _idCH = c_Id++;
}

Collision::Collision(Collision const & src){
  *this = src;
}

Collision::~Collision(){
  std::cout << "Collision destructed" << std::endl;
}

////GETTERS////
int Collision::getX() const{
  return p_x;
}

int Collision::getY() const{
  return p_y;
}

////SETTERS////
void Collision::setX(int const x){
  p_x = x;
}

void Collision::setY(int const y){
  p_y = y;
}

void Collision::touchTarget(){
  touch = true;
  visible = false;
}

std::ostream & operator<<(std::ostream  & out, Collision const & f){
  return out << "Collision " << f.getX() << "/" << f.getY() << std::endl;
}

int Collision::c_Id = 0;
