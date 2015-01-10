/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:03:14 by sbres             #+#    #+#             */
/*   Updated: 2015/01/10 15:12:12 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_CLASS_HPP
# define INTERFACE_CLASS_HPP

# include <curses.h>
# include "Character.class.hpp"

class Interface
{
public:
	Interface();
	Interface(Interface const & src);
	~Interface();
	Interface & operator=( Interface const & rhs);
	void draw(WINDOW * win);
    void draw_char(WINDOW *win, Character const & ship);
};

std::ostream & operator<<(std::ostream & o, Interface const & i);

#endif /* INTERFACE_CLASS_HPP */