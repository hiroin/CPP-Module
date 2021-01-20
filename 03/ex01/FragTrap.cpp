/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 12:21:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(int amount)
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

void FragTrap::beRepaired(int amount)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int					i;
	int					r;
	static int			flag = 0;

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
	std::cout << "Launch Vaulthunter.EXE. Random Attaaaaaaaaaaaaaaaaaaack!!!!!" << std::endl;
	if (flag == 0)
	{
		srand((unsigned int)time(NULL));
		flag = 1;
	}
	i = 0;
	while (i < 5)
	{
		r = rand() % 2;
		if (r == 0)
			rangedAttack(target);
		else if (r == 1)
			meleeAttack(target);
		i++;
	}
}

std::string	FragTrap::getName() const
{
	return name_;
}

int	FragTrap::getHitPoints() const
{
	return hit_points_;
}

int	FragTrap::getEnergyPoints() const
{
	return energy_points_;
}

int	FragTrap::getMaxEnergyPoints() const
{
	return max_energy_points_;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::FragTrap(std::string name) : 
	hit_points_(100),
	max_hit_points_(100),
	energy_points_(50),
	max_energy_points_(50),
	level_(1),
	name_(name),
	melee_attack_damage_(30),
	ranged_attack_damage_(20),
	armor_damage_reduction_(5)
{
	std::cout << "Are you sure you want to be this character?(Name constructor called)" << std::endl;
}

FragTrap::FragTrap() :
	hit_points_(100),
	max_hit_points_(100),
	energy_points_(50),
	max_energy_points_(50),
	level_(1),
	name_("default"),
	melee_attack_damage_(30),
	ranged_attack_damage_(20),
	armor_damage_reduction_(5)
{
	std::cout << "Are you sure you want to be this character?(Default constructor called)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!(Destructor called)" << std::endl;
}

FragTrap& 	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Assignation operator called" << std::endl;
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

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap)
{
	os << "HitPoints    = " << fragtrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << fragtrap.getEnergyPoints() << std::endl;
    return os;
}