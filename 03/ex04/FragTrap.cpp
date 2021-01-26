/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:51:57 by user42           ###   ########.fr       */
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

FragTrap::FragTrap(const std::string &name) :
	  ClapTrap(
			  100
			, 100
			, 100
			, 100
			, 1
			, name
			, 30
			, 20
			, 5
			)
{
	std::cout << "FragTrap All parameter set constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& 	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap)
{
	os << "HitPoints    = " << fragtrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << fragtrap.getEnergyPoints() << std::endl;
    return os;
}