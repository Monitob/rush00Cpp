
#ifndef COLLISION_H
# define COLLISION_H

#include <iostream>

class Collision {

private:
  int _idCH;
  static int c_Id;

public:

  Collision();
  Collision(int x, int y);
  Collision(Collision const & src);
  ~Collision();
  int getX() const;
  int getY() const;
  int generateId();
  void setX(int const x);
  void setY(int const y);
  void touchTarget();


protected:
  int p_x;
  int p_y;

  bool visible;
  bool touch;
  bool shoot;
};

std::ostream & operator<<(std::ostream  & out, Collision const & f);

#endif
