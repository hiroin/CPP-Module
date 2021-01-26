/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:14:41 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:52:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(
			  100
			, 100
			, 120
			, 120
			, 1
			, name
			, 60
			, 20
			, 5
			)
{
	std::cout << "SuperTrap Name constructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other)
{
	std::cout << "SuperTrap Copy constructor called" << std::endl;
}

SuperTrap& 	SuperTrap::operator=(const SuperTrap& other)
{
	std::cout << "SuperTrap Assignation operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap Default constructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const SuperTrap& superTrap)
{
	os << "HitPoints    = " << superTrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << superTrap.getEnergyPoints() << std::endl;
    return os;
}
