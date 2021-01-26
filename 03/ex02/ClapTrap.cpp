/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 01:56:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::takeDamage(int amount)
{
	int	p;

	if (amount <= 0)
		return ;
	p = amount - armor_damage_reduction_;
	if (p < 0)
		p = 0;
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

void ClapTrap::beRepaired(int amount)
{
	if (amount <= 0)
		return ;
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " has repaired ";
	std::cout << amount;
	std::cout << " points." << std::endl;

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

int	ClapTrap::getHitPoints() const
{
	return hit_points_;
}

int	ClapTrap::getEnergyPoints() const
{
	return energy_points_;
}

int	ClapTrap::getMaxEnergyPoints() const
{
	return max_energy_points_;
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& 	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &other)
	{
		hit_points_ = other.hit_points_;
		max_hit_points_ = other.max_hit_points_;
		energy_points_ = other.energy_points_;
		level_ = other.level_;
		name_ = other.name_;
		melee_attack_damage_ = other.melee_attack_damage_;
		ranged_attack_damage_ = other.ranged_attack_damage_;
		armor_damage_reduction_ = other.armor_damage_reduction_;
	}
	return (*this);
}

ClapTrap::ClapTrap()
{
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& ClapTrap)
{
	os << "HitPoints    = " << ClapTrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << ClapTrap.getEnergyPoints() << std::endl;
    return os;
}