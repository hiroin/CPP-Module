/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 14:18:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <string>
#include <iostream>

// ISpaceMarine*	TacticalMarine::clone() const
// {
// 	//現在のオブジェクトのコピーを返します。
// 	return ;
// }

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

TacticalMarine::TacticalMarine(const TacticalMarine& TacticalMarine)
{
	(void)TacticalMarine;
	std::cout << "TacticalMarine Copy constructor called" << std::endl;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "TacticalMarine Default constructor called" << std::endl;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "TacticalMarine Destructor called" << std::endl;
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine& 	TacticalMarine::operator = (const TacticalMarine& fixed)
{
	(void)fixed;
	std::cout << "TacticalMarine Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const TacticalMarine& TacticalMarine)
{
	os << "TacticalMarine" << std::endl;
    return os;
}
