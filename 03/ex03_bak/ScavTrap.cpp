/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 05:55:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <cmath>

void ScavTrap::challengeNewcomer(void)
{
	int					i;
	int					r;

	if (energy_points_ < 25)
	{
		std::cout << "FR4G-TP ";
		std::cout << name_;
		std::cout << " are not enough energy_points." << std::endl;
		return;
	}
	else
	{
		energy_points_ -= 25;
	}
	srand((unsigned int)time(NULL));
	i = 0;
	while (i < 5)
	{
		std::cout << "FR4G-TP ";
		std::cout << name_;
		r = rand() % 2;
		if (r == 0)
			std::cout << "jumps." << std::endl;
		else if (r == 1)
			std::cout << "is down." << std::endl;
		i++;
	}
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap)
{
	(void)ScavTrap;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(
		  const int &hit_points
		, const int &max_hit_points
		, const int &energy_points
		, const int &max_energy_points
		, const int &level
		, const std::string &name
		, const int &melee_attack_damage
		, const int &ranged_attack_damage
		, const int &armor_damage_reduction
	) :
	  ClapTrap(
			  hit_points
			, max_hit_points
			, energy_points
			, max_energy_points
			, level
			, name
			, melee_attack_damage
			, ranged_attack_damage
			, armor_damage_reduction
			)
{
	std::cout << "ScavTrap All parameter set constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& 	ScavTrap::operator = (const ScavTrap& fixed)
{
	(void)fixed;
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const ScavTrap& scavtrap)
{
	os << scavtrap.getName();
    return os;
}