/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:14:41 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 06:59:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "Ninja ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << ranged_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "Ninja ";
	std::cout << name_;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << melee_attack_damage_;
	std::cout << " points of damage!" << std::endl;
}

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap Default constructor called" << std::endl;
}	

void		NinjaTrap::ninjaShoebox(const ClapTrap& Claptrap)
{
	std::cout << "Claptrap was given!" << std::endl;
	std::cout << "My Name is " << Claptrap.getName() << std::endl;
	std::cout << "Claptrap has no inherent behavior..." << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap& FragTrap)
{
	std::cout << "FragTrap was given!" << std::endl;
	std::cout << "My Name is " << FragTrap.getName() << std::endl;
	FragTrap.vaulthunter_dot_exe("Boss");
}

void		NinjaTrap::ninjaShoebox(const ScavTrap& ScavTrap)
{
	std::cout << "ScavTrap was given!" << std::endl;
	std::cout << "My Name is " << ScavTrap.getName() << std::endl;
	ScavTrap.challengeNewcomer();
}

void		NinjaTrap::ninjaShoebox(const NinjaTrap& NinjaTrap) 
{
	std::cout << "NinjaTrap was given!" << std::endl;
	std::cout << "My Name is " << NinjaTrap.getName() << std::endl;
	std::cout << "NinjaTrap has no inherent behavior..." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
	  ClapTrap(
			  60
			, 60
			, 120
			, 120
			, 1
			, name
			, 60
			, 5
			, 0
			)
{
	std::cout << "NinjaTrap Name constructor called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other)
{
	std::cout << "NinjaTrap Copy constructor called" << std::endl;
}

NinjaTrap& 	NinjaTrap::operator=(const NinjaTrap& other)
{
	std::cout << "NinjaTrap Assignation operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const NinjaTrap& ninjaTrap)
{
	os << "HitPoints    = " << ninjaTrap.getHitPoints() << std::endl;
	os << "EnergyPoints = " << ninjaTrap.getEnergyPoints() << std::endl;
    return os;
}
