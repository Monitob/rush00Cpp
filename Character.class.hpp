
#ifndef CHARACTER_H
# define CHARACTER_H

#define MAX_X 620
#define MIN_X 0
#define MAX_Y 460
#define MIN_Y 0

private:
  int _idCH;
  static int s_Id;

public:


  Character();
  Character(std::string name);
  Character(Character const & src);
  ~Character();
  Character & operator=(Character const & rhs)
  int generateId();
  int getIdCh();
  int getX();
  int getY();
  void setX(int x);
  void setY(int y);
  void attack(Character const & target);
  void receiveAttack(int amount);


protected:
  std::string _name;
  int p_x;
  int p_y;
  int p_lives;

  bool visible;
  bool dead;

#endif
