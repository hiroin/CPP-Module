/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 03:05:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine* m = new TacticalMarine();
	*m = *this;
	return m;
}

void 			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void 			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& other)
{
	std::cout << "TacticalMarine Copy constructor called" << std::endl;
	*this = other;
}

TacticalMarine& 	TacticalMarine::operator=(const TacticalMarine& other)
{
	std::cout << "TacticalMarine Assignation operator called" << std::endl;
	(void)other;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const TacticalMarine& TacticalMarine)
{
	(void)TacticalMarine;
	os << "TacticalMarine" << std::endl;
    return os;
}
