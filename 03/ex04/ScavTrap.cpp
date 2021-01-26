/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/21 13:54:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::challengeNewcomer(void) const
{
	static int		flag = 0;
	std::string		challenges[] =
	{
		"Masked Rider Kick!",
		"Omega Drive Ore!",
		"Mighty Critical Strike!",
		"Vortech finish!",
		"Vortec Time Break!"
	};

	std::cout << "Newcomer!" << std::endl;
	if (flag == 0)
	{
		srand((unsigned int)time(NULL));
		flag = 1;
	}
	std::cout << challenges[rand() % 5] << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) :
	  ClapTrap(
			  100
			, 100
			, 100
			, 100
			, 1
			, name
			, 20
			, 15
			, 3
			)
{
	std::cout << "ScavTrap All parameter set constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& 	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const ScavTrap& scavTrap)
{
	os << "HitPoints    = " << scavTrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << scavTrap.getEnergyPoints() << std::endl;
    return os;
}