/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:03:12 by sbres             #+#    #+#             */
/*   Updated: 2015/01/10 15:15:27 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <iostream>
#include "Interface.class.hpp"

Interface::Interface(){

}

Interface::Interface(std::string name) {
	_name = name;
}

Interface::Interface(Interface const & src)
{
	*this = src;
}

Interface::~Interface()
{
}

Interface & Interface::operator=(Interface const & rhs) {
	if (this != &rhs)
	{

	}
	return (*this);
}

void Interface::draw_char(WINDOW *win, Character const  & character, char c) {
    mvwaddch(win, character.getY(), character.getX(), c);
}

std::string Interface::getName() const {
	return _name;
}

std::ostream & operator<<(std::ostream & o, Interface const & f)
{
	o << f.getName() << std::endl;
	return (o);
}
