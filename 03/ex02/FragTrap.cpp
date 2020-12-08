/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 03:28:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <random>

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int					i;
	int					r;
	std::random_device	rnd;

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
	i = 0;
	while (i < 5)
	{
		r = rnd() % 2;
		if (r == 0)
			rangedAttack(target);
		else if (r == 1)
			meleeAttack(target);
		i++;
	}
}

FragTrap::FragTrap(const FragTrap& fragtrap)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(
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
	std::cout << "FragTrap All parameter set constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& 	FragTrap::operator = (const FragTrap& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap)
{
	os << fragtrap.getName();
    return os;
}