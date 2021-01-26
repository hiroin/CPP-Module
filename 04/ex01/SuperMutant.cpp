/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 12:45:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void	SuperMutant::takeDamage(int damage)
{
	if (damage < 0)
		return;
	damage -= 3;
	if (damage < 0)
		return;
	hp_ = hp_ - damage;
	if (hp_ < 0)
		hp_ = 0;
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

SuperMutant::SuperMutant(const SuperMutant& other)
{
	std::cout << "SuperMutant Copy constructor called" << std::endl;
	*this = other;
}

SuperMutant& 	SuperMutant::operator=(const SuperMutant& other)
{
	std::cout << "SuperMutant Assignation operator called" << std::endl;
	if (this != &other)
	{
		Enemy::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const SuperMutant& SuperMutant)
{
	os << "SuperMutant" << std::endl;
	os << " type : " << SuperMutant.getType() << std::endl;
	os << " hp   : " << SuperMutant.getHP() << std::endl;
    return os;
}