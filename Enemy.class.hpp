#ifndef ENEMY_HPP
# define ENEMY_HPP

#define MAX_X 620
#define MIN_X 0
#define MAX_Y 460
#define MIN_Y 0

# include "Character.class.hpp"
# include <iostream>

class Enemy : public Character
{
	public:
		Enemy();
		Enemy(Enemy const & src);
		~Enemy();
		Enemy(int posX, int posY);
		Enemy & operator=(Enemy const & rhs);
		int getIntPoints() const;
		int getIdCH() const;
	//	static Enemy & getRandomEnemy();
	private:
		int p_lives;
		int p_hitPoints;
		int p_maxHitPoints;

	protected:
		int _idCH;
		static int e_Id;
		int p_x;
		int p_y;
		bool visible;
		bool dead;
};

std::ostream & operator<<(std::ostream & o, Enemy const & i);

#endif /* !ENEMY_HPP */
