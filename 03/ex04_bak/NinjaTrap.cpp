/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:14:41 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 08:38:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const NinjaTrap& NinjaTrap)
{
	(void)NinjaTrap;
	std::cout << "NinjaTrap Copy constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NinjaTrap Name constructor called" << std::endl;
	name_ = name;
}

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "NInja", 60, 5, 0)
{
	std::cout << "NinjaTrap Default constructor called" << std::endl;
}	

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called" << std::endl;
}

NinjaTrap& 	NinjaTrap::operator = (const NinjaTrap& fixed)
{
	(void)fixed;
	std::cout << "NinjaTrap Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const NinjaTrap& NinjaTrap)
{
	os << NinjaTrap.getName();
    return os;
}

void		NinjaTrap::ninjaShoebox(ClapTrap& Claptrap)
{
	(void)Claptrap;
	std::cout << "Claptrap was given." << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap& FragTrap)
{
	(void)FragTrap;
	std::cout << "FragTrap was given." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap& ScavTrap)
{
	(void)ScavTrap;
	std::cout << "ScavTrap was given." << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& NinjaTrap)
{
	(void)NinjaTrap;
	std::cout << "NinjaTrap was given." << std::endl;
}