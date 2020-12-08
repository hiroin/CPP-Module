/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 01:16:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <random>

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
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
		std::cout << "FR4G-TP ";
		std::cout << name_;
		r = rnd() % 2;
		if (r == 0)
			std::cout << "jumps." << std::endl;
		else if (r == 1)
			std::cout << "is down." << std::endl;
		i++;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	p;

	p = amount - armor_damage_reduction_;
	std::cout << "Enemy attack!" << std::endl;
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " has taken ";
	std::cout << p;
	std::cout << " dameage. ";

	hit_points_ -= p;
	if (hit_points_ < 0)
		hit_points_ = 0;
	std::cout << name_;
	std::cout << " has ";
	std::cout << hit_points_;
	std::cout << " remaining." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	p;

	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " has repaired." << std::endl;

	hit_points_ += amount;
	if (hit_points_ > max_hit_points_)
		hit_points_ = max_hit_points_;
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " has ";
	std::cout << hit_points_;
	std::cout << " remaining." << std::endl;
}

std::string	ScavTrap::getName() const
{
	return name_;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	name_ = name;
}

ScavTrap::ScavTrap() : hit_points_(100), max_hit_points_(100), energy_points_(50), level_(1), name_("default"), melee_attack_damage_(20), ranged_attack_damage_(15), armor_damage_reduction_(3)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& 	ScavTrap::operator = (const ScavTrap& fixed)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const ScavTrap& ScavTrap)
{
	os << ScavTrap.getName();
    return os;
}