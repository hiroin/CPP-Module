/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/19 08:32:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <string>
#include <iostream>

ISpaceMarine*	AssaultTerminator::clone() const
{
	//現在のオブジェクトのコピーを返します。
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

AssaultTerminator::AssaultTerminator(const AssaultTerminator& AssaultTerminator)
{
	(void)AssaultTerminator;
	std::cout << "AssaultTerminator Copy constructor called" << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "AssaultTerminator Default constructor called" << std::endl;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "AssaultTerminator Destructor called" << std::endl;
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator& 	AssaultTerminator::operator = (const AssaultTerminator& fixed)
{
	(void)fixed;
	std::cout << "AssaultTerminator Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AssaultTerminator& AssaultTerminator)
{
	os << "AssaultTerminator" << std::endl;
    return os;
}
