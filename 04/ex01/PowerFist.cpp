/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 07:06:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include <string>
#include <iostream>

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist& PowerFist)
{
	(void)PowerFist;
	std::cout << "PowerFist Copy constructor called" << std::endl;
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	std::cout << "PowerFist Initial value is set constructor called" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist Destructor called" << std::endl;
}

PowerFist& 	PowerFist::operator = (const PowerFist& fixed)
{
	(void)fixed;
	std::cout << "PowerFist Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const PowerFist& PowerFist)
{
	os << "Weapon" << std::endl;
	os << " name   : " << PowerFist.getName() << std::endl;
	os << " apcost : " << PowerFist.getAPCost() << std::endl;
	os << " damage : " << PowerFist.getDamage() << std::endl;
    return os;
}