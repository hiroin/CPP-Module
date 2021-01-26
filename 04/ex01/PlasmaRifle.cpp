/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:23:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "PlasmaRifle Default constructor called" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle Destructor called" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) : AWeapon(other)
{
	std::cout << "PlasmaRifle Copy constructor called" << std::endl;
	*this = other;
}

PlasmaRifle& 	PlasmaRifle::operator=(const PlasmaRifle& other)
{
	std::cout << "PlasmaRifle Assignation operator called" << std::endl;
	if (this != &other)
	{
		AWeapon::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const PlasmaRifle& PlasmaRifle)
{
	os << "Weapon" << std::endl;
	os << " name   : " << PlasmaRifle.getName() << std::endl;
	os << " apcost : " << PlasmaRifle.getAPCost() << std::endl;
	os << " damage : " << PlasmaRifle.getDamage() << std::endl;
    return os;
}