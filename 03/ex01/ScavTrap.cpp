/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/21 13:39:45 by user42           ###   ########.fr       */
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

void ScavTrap::takeDamage(int amount)
{
	int	p;

	if (amount <= 0)
		return ;
	p = amount - armor_damage_reduction_;
	if (p < 0)
		p = 0;	
	std::cout << "Enemy attack!" << std::endl;
	std::cout << "ScavTrap FR4G-TP ";
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

void ScavTrap::beRepaired(int amount)
{
	if (amount <= 0)
		return ;
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " has repaired ";
	std::cout << amount;
	std::cout << " points." << std::endl;

	hit_points_ += amount;
	if (hit_points_ > max_hit_points_)
		hit_points_ = max_hit_points_;
	std::cout << "ScavTrap FR4G-TP ";
	std::cout << name_;
	std::cout << " has ";
	std::cout << hit_points_;
	std::cout << " remaining." << std::endl;
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

std::string	ScavTrap::getName() const
{
	return name_;
}

int	ScavTrap::getHitPoints() const
{
	return hit_points_;
}

int	ScavTrap::getEnergyPoints() const
{
	return energy_points_;
}

int	ScavTrap::getMaxEnergyPoints() const
{
	return max_energy_points_;
}

ScavTrap::ScavTrap(std::string name) :
	hit_points_(100),
	max_hit_points_(100),
	energy_points_(50),
	max_energy_points_(50),
	level_(1),
	name_(name),
	melee_attack_damage_(20),
	ranged_attack_damage_(15),
	armor_damage_reduction_(3)
{
	std::cout << "As far back as I can remember, I’ve always wanted to be a gangster.(ScavTrap Name constructor called)" << std::endl;
}

ScavTrap::ScavTrap() :
	hit_points_(100),
	max_hit_points_(100),
	energy_points_(50),
	max_energy_points_(50),
	level_(1),
	name_("default"),
	melee_attack_damage_(20),
	ranged_attack_damage_(15),
	armor_damage_reduction_(3)
{
	std::cout << "As far back as I can remember, I’ve always wanted to be a gangster.(ScavTrap Default constructor called)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Danger and death are everywhere.(ScavTrap Destructor called)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& 	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	hit_points_ = other.hit_points_;
	max_hit_points_ = other.max_hit_points_;
	energy_points_ = other.energy_points_;
	level_ = other.level_;
	name_ = other.name_;
	melee_attack_damage_ = other.melee_attack_damage_;
	ranged_attack_damage_ = other.ranged_attack_damage_;
	armor_damage_reduction_ = other.armor_damage_reduction_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const ScavTrap& scavTrap)
{
	os << "HitPoints    = " << scavTrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << scavTrap.getEnergyPoints() << std::endl;
    return os;
}