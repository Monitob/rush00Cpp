#include <iostream>
#include "Enemy.hpp"


Enemy::Enemy(std::string name, std::string title) : _name(name), _title(title){
  std::cout << _name  << ", is born !" << std::endl;
}

Enemy::Enemy(){
  _name = "NAME";
  _title = "TITLE";
  std::cout << _name << ", is born !" << std::endl;
  return ;
}

Enemy::~Enemy(){
  std::cout << _name << ". Consequences will never be the same !" << std::endl;
}

std::string Enemy::getName() const{
  return _name;
}

Enemy & Enemy::operator=( Enemy const & rhs ){
  if (this != &rhs)
    _name = rhs.getName();
    return *this;
}

std::ostream & operator<<(std::ostream & out, Enemy const f){
    return out <<  "I am, " << f.getName() << ", and I like ponies !" << std::endl;
}
