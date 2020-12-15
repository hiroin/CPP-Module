/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:45:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <string>
#include <iostream>

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		damage = 0;
	hp_ = hp_ - damage;
	if (hp_ < 0)
		hp_ = 0;
}

SuperMutant::SuperMutant(const SuperMutant& SuperMutant)
{
	(void)SuperMutant;
	std::cout << "SuperMutant Copy constructor called" << std::endl;
}

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "SuperMutant Default constructor called" << std::endl;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "SuperMutant Destructor called" << std::endl;
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant& 	SuperMutant::operator = (const SuperMutant& fixed)
{
	(void)fixed;
	std::cout << "SuperMutant Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const SuperMutant& SuperMutant)
{
	os << "SuperMutant" << std::endl;
	os << " type : " << SuperMutant.getType() << std::endl;
	os << " hp   : " << SuperMutant.getHP() << std::endl;
    return os;
}