#include "missiles.class.hpp"

Missiles::Missiles()
{
}
Missiles::Missiles(int x, int y) : p_x(x), p_y(y), p_visible(true)
{
}
Missiles::Missiles(Missiles const & src)
{
	*this = src;
}
Missiles::~Missiles()
{
}
Missiles & Missiles::operator=(Missiles const & rhs)
{
	p_x = rhs.getX();
	p_y = rhs.getY();
	p_visible = rhs.p_visible;
	return *this;
}
int Missiles::getX() const
{
	return p_x;
}
int Missiles::getY() const
{
	return p_y;
}
void Missiles::setX(int const x)
{
	p_x = x;
}
void Missiles::setY(int const y)
{
	p_y = y;
}
void Missiles::move(int const x, int const y)
{
	setX(x);
	setY(y);
}
void Missiles::die()
{
	p_visible = false;
}
