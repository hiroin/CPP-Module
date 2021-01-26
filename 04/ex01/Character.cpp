/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 11:59:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::attack(Enemy* enemy)
{
	if (!aweapon_ || !enemy)
		return ;
	if (ap_ < aweapon_->getAPCost())
	{
		std::cout << "Not enough AP!" << std::endl;
		return ;
	}
	ap_ -= aweapon_->getAPCost();
	std::cout << name_ << " attacks " << enemy->getType() << " with a " << aweapon_->getName() << std::endl;
	aweapon_->attack();
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
	if (!aweapon_)
		return "unarmed";
	return aweapon_->getName();
}

int	Character::getAp() const
{
	return ap_;
}

std::string	const & Character::getName() const
{
	return name_;
}


Character::Character(std::string const & name) : name_(name), ap_(40)
{
	std::cout << "Character Initial value is set constructor called" << std::endl;
	aweapon_ = NULL;
}

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

Character& 	Character::operator=(const Character& other)
{
	std::cout << "Character Assignation operator called" << std::endl;
	if (this != &other)
	{
		name_ = other.name_;
		ap_ = other.ap_;
		aweapon_ = other.aweapon_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Character& Character)
{
	os << "Character" << std::endl;
	os << " name   : " << Character.getName() << std::endl;
	os << " weapon : " <<  Character.getWeaponName() << std::endl;
	os << " AP     : " <<  Character.getAp() << std::endl;
	os << Character.getName() << " has " << Character.getAp() << " AP and wields a " << Character.getWeaponName() << std::endl;
    return os;
}