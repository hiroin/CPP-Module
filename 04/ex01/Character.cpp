/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 03:24:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>


void Character::attack(Enemy* enemy)
{
	if (aweapon_ == NULL || !enemy)
		return ;
	if (ap_ < aweapon_->getAPCost())
		return ;
	ap_ -= aweapon_->getAPCost();
	std::cout << getName() << " attacks " << enemy->getType() << " with a " << aweapon_->getName() << std::endl;
	enemy->takeDamage(aweapon_->getDamage());
	if (enemy->getHP() == 0)
	{
		delete enemy;
		enemy = NULL;
	}
}

void Character::recoverAP()
{
	ap_ += 10;
	if (ap_ > 40)
		ap_ = 40;
}

void Character::equip(AWeapon* aweapon)
{
	aweapon_ = aweapon;
}

std::string	Character::getWeaponName() const
{
	if (aweapon_ == NULL)
		return "unarmed";
	return aweapon_->getName();
}

int	Character::getAp() const
{
	return ap_;
}

std::string	Character::getName() const
{
	return name_;
}

Character::Character(const Character& Character)
{
	(void)Character;
	std::cout << "Character Copy constructor called" << std::endl;
}

Character::Character(std::string const & name) : name_(name)
{
	std::cout << "Character Initial value is set constructor called" << std::endl;
}

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

Character& 	Character::operator = (const Character& fixed)
{
	(void)fixed;
	std::cout << "Character Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Character& Character)
{
	os << "Character" << std::endl;
	os << " name : " << Character.getName() << std::endl;
	os << " Weapon" << std::endl;
	os << "  name : " << Character.getWeaponName() << std::endl;
	os << Character.getName() << " has " << Character.getAp() << " AP and wields a " << Character.getWeaponName() << std::endl;
    return os;
}