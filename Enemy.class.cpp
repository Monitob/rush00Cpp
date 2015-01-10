#include "Enemy.class.hpp"

Enemy::Enemy(){

 p_x = MAX_X;
 p_y = 10;
 p_lives = 100;
 dead = false;
 visible = true;
 _idCH = 0;

}

Enemy::Enemy(int posX, int posY){
  p_x = posX;
  p_y = posY;
  p_lives = 100;
  dead = false;
  visible = true;
  _idCH = 0;
  this->_idCH = e_Id++;
}

Enemy::Enemy(Enemy const & src) : Character(src) {
  *this = src;
}

Enemy::~Enemy(){
}


// static Enemy & Enemy::getRandomEnemy() {
//   Enemy e = Enemy(MAX_X, (std::rand() % MAX_Y));
//   return e;
// }

int Enemy::getIntPoints() const
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

int Enemy::getIdCH() const{
  return this->_idCH;
}

std::ostream & operator<<(std::ostream & o, Enemy const & e)
{
  o << "Enemy Id " << e.getIdCH() << std::endl;
  return (o);
}

int Enemy::e_Id = 0;
