/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 03:05:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine*	AssaultTerminator::clone() const
{
	ISpaceMarine* m = new AssaultTerminator();
	*m = *this;
	return m;
}

void 			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void 			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& other)
{
	std::cout << "AssaultTerminator Copy constructor called" << std::endl;
	*this = other;
}

AssaultTerminator& 	AssaultTerminator::operator=(const AssaultTerminator& other)
{
	std::cout << "AssaultTerminator Assignation operator called" << std::endl;
	(void)other;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AssaultTerminator& AssaultTerminator)
{
	(void)AssaultTerminator;
	os << "AssaultTerminator" << std::endl;
    return os;
}
