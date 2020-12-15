/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:23:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>
#include <iostream>

std::string	AWeapon::getName() const
{
	return name_;
}

int	AWeapon::getAPCost() const
{
	return apcost_;
}

int	AWeapon::getDamage() const
{
	return damage_;
}

AWeapon::AWeapon(const AWeapon& AWeapon)
{
	(void)AWeapon;
	std::cout << "AWeapon Copy constructor called" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name_(name), apcost_(apcost), damage_(damage)
{
	std::cout << "AWeapon Initial value is set constructor called" << std::endl;
}

AWeapon::AWeapon()
{
	std::cout << "AWeapon Default constructor called" << std::endl;
}

AWeapon::~AWeapon()
{
	std::cout << "AWeapon Destructor called" << std::endl;
}

AWeapon& 	AWeapon::operator = (const AWeapon& fixed)
{
	(void)fixed;
	std::cout << "AWeapon Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AWeapon& AWeapon)
{
	os << "Weapon" << std::endl;
	os << " name   : " << AWeapon.getName() << std::endl;
	os << " APCost : " << AWeapon.getAPCost() << std::endl;
	os << " Damage : " << AWeapon.getDamage() << std::endl;
    return os;
}