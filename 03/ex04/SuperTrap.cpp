/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:14:41 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 08:36:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const SuperTrap& SuperTrap)
{
	(void)SuperTrap;
	std::cout << "SuperTrap Copy constructor called" << std::endl;
}

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap Default constructor called" << std::endl;
	energy_points_ = 120;
	max_energy_points_ = 120;
	melee_attack_damage_ = 20;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SuperTrap Default constructor called" << std::endl;
	energy_points_ = 120;
	max_energy_points_ = 120;
	melee_attack_damage_ = 20;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called" << std::endl;
}

SuperTrap& 	SuperTrap::operator = (const SuperTrap& fixed)
{
	(void)fixed;
	std::cout << "SuperTrap Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const SuperTrap& SuperTrap)
{
	os << SuperTrap.getName();
    return os;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}