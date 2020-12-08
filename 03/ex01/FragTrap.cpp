/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 11:38:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <random>

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

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

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

std::string	FragTrap::getName() const
{
	return name_;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
{
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	name_ = name;
}

FragTrap::FragTrap() : hit_points_(100), max_hit_points_(100), energy_points_(100), level_(1), name_("default"), melee_attack_damage_(30), ranged_attack_damage_(20), armor_damage_reduction_(5)
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
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