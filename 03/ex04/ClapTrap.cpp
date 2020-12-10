/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 08:05:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <random>

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
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

std::string	ClapTrap::getName() const
{
	return name_;
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap)
{
	(void)ClapTrap;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hit_points_(100), max_hit_points_(100), energy_points_(100), max_energy_points_(100), level_(1), melee_attack_damage_(30), ranged_attack_damage_(20), armor_damage_reduction_(5)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
	name_ = name;
}

ClapTrap::ClapTrap(
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
	  hit_points_(hit_points)
	, max_hit_points_(max_hit_points)
	, energy_points_(energy_points)
	, max_energy_points_(max_energy_points)
	, level_(level)
	, name_(name)
	, melee_attack_damage_(melee_attack_damage)
	, ranged_attack_damage_(ranged_attack_damage)
	, armor_damage_reduction_(armor_damage_reduction)
{
	std::cout << "ClapTrap All parameter set constructor called" << std::endl;
}

ClapTrap::ClapTrap() : hit_points_(100), max_hit_points_(100), energy_points_(100), max_energy_points_(100), level_(1), name_("default"), melee_attack_damage_(30), ranged_attack_damage_(20), armor_damage_reduction_(5)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& 	ClapTrap::operator = (const ClapTrap& fixed)
{
	(void)fixed;
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& ClapTrap)
{
	os << ClapTrap.getName();
    return os;
}