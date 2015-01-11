
#ifndef MISSILES_H
# define MISSILES_H

#include <iostream>

class Missiles {

private:
  int _id;
  static int s_Id;

public:

  Missiles();
  Missiles(int x, int y);
  Missiles(Missiles const & src);
  ~Missiles();
  Missiles & operator=(Missiles const & rhs);
  Missiles & operator+=(Missiles const & rhs);
  int getX() const;
  int getY() const;
  void setX(int const x);
  void setY(int const y);
  void move(int const x, int const y);

protected:
  int p_x;
  int p_y;

  bool visible;
  bool dead;
};

std::ostream & operator<<(std::ostream  & out, Missiles const & f);

#endif