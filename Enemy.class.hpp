#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Character.class.hpp"
# include <iostream>
# include <cstdlib>

class Enemy : public Character
{
	public:
		Enemy();
		Enemy(Enemy const & src);
		~Enemy();
		Enemy(int posX, int posY);
		Enemy & operator=(Enemy const & rhs);
		int getPoints() const;
	private:
		int p_hitPoints;
		int p_maxHitPoints;
};

std::ostream & operator<<(std::ostream & o, Enemy const & i);

#endif /* !ENEMY_HPP */
