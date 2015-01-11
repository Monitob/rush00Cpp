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
#include "Character.class.hpp"

Interface::Interface()
{
	return ;
}

Interface::Interface(Interface const & src)
{

}

Interface::~Interface()
{

}

Interface & Interface::operator=(Interface const & rhs)
{
if (this != &rhs)
{

}
return (*this);
}


void Interface::draw(WINDOW * win)
{
    int x;
    for (x = 0; x < 100; ++x) {
        mvwaddch(win, 1, x, 'X');
        mvwaddch(win, 24, x, 'X');
    }
    for (x = 1; x < 24; ++x) {
        mvwaddch(win, x, 0, 'X');
        mvwaddch(win, x, 99, 'X');
    }
};

void Interface::draw_char(WINDOW *win, Character const  & ship) {
    int x;
    int y;

    x = ship.getX();
    y = ship.getY();
    mvwaddch(win, y, x, '@');


}

std::ostream & operator<<(std::ostream & o, Interface const & i)
{
o << "Interface instance";
return (o);
}
