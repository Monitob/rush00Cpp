
#ifndef CHARACTER_H
# define CHARACTER_H

#define MAX_X 620
#define MIN_X 0
#define MAX_Y 460
#define MIN_Y 0

#include <iostream>

class Character {

private:
  int _idCH;
  static int s_Id;

public:

  Character();
  Character(std::string name, int x, int y);
  Character(Character const & src);
  ~Character();
  Character & operator=(Character const & rhs);
  Character & operator-=(Character const & rhs);
  int generateId();
  std::string getName() const;
  int getIdCh();
  int getX() const;
  int getY() const;
  void setX(int const x);
  void setY(int const y);
  void setDead();
  int getLives() const ;
  void move(int const x, int const y);
  void attack(Character  & target);
  void receiveAttack(int amount);
  void moveUp();
  void moveDown();
  void moveRight();
  void moveLeft();
  void attack(Character const & target);

protected:
  std::string _name;
  int p_x;
  int p_y;
  int p_lives;

  bool visible;
  bool dead;
};

std::ostream & operator<<(std::ostream  & out, Character const & f);

#endif
