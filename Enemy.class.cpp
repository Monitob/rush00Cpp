#include "Enemy.class.hpp"

Enemy::Enemy(){
  p_x = MAX_X;
  p_y = std::rand() % MAX_Y;
  p_hitPoints = 100;
  p_maxHitPoints = 100;
  p_visible = true;
  p_name = "alien";
}

Enemy::Enemy(int posX, int posY){
  p_x = posX;
  p_y = posY;
  p_hitPoints = 100;
  p_maxHitPoints = 100;
  p_visible = true;
  p_name = "alien";
}

Enemy::Enemy(Enemy const & src) : Character(src) {
  *this = src;
}

Enemy::~Enemy(){
}

int Enemy::getPoints() const
{
  return (this->p_hitPoints);
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
  if (this != &rhs)
  {
    p_x = rhs.getX();
    p_y = rhs.getY();
  }
  return (*this);
}

std::ostream & operator<<(std::ostream & o, Enemy const & e)
{
  o << "Enemy name " << e.getName() << std::endl;
  return (o);
}
