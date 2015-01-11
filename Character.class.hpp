
#ifndef CHARACTER_H
# define CHARACTER_H

#define MAX_X 100
#define MIN_X 0
#define MAX_Y 25
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
  void setIsDead();
  bool isDead();
  void setName(std::string name);
  int getLives() const;
  void attack(Character  & target);
  void receiveAttack(int amount);
  void moveUp();
  void moveDown();
  void moveRight();
  void moveLeft();
  void attack(Character const & target);

protected:
  std::string p_name;
  int p_x;
  int p_y;
  int p_lives;
  bool p_visible;
  bool p_dead;
};

std::ostream & operator<<(std::ostream  & out, Character const & f);

#endif
