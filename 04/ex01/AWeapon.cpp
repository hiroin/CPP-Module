/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:26:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

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

AWeapon::AWeapon(const AWeapon& other)
{
	std::cout << "AWeapon Copy constructor called" << std::endl;
	*this = other;
}

AWeapon& 	AWeapon::operator=(const AWeapon& other)
{
	std::cout << "AWeapon Assignation operator called" << std::endl;
	if (this != &other)
	{
		name_ = other.name_;
		apcost_ = other.apcost_;
		damage_ = other.damage_;
	}
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