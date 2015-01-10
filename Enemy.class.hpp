#ifndef ENEMY_H
# define ENEMY_H

class Enemy {



public:
  Enemy(std::string name, std::string title);
  Enemy();
  ~Enemy();
  Enemy & operator=( Enemy const & rhs);
  std::string getName() const;

};

std::ostream & operator<<(std::ostream & out, Enemy const f);

#endif
