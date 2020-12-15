/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:24:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>
#include <iostream>

std::string	Enemy::getType() const
{
	return type_;
}

int		Enemy::getHP() const
{
	return hp_;
}

void	Enemy::takeDamage(int damage)
{
	hp_ = hp_ - damage;
	if (hp_ < 0)
		hp_ = 0;
}

Enemy::Enemy(const Enemy& Enemy)
{
	(void)Enemy;
	std::cout << "Enemy Copy constructor called" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type) : hp_(hp), type_(type)
{
	std::cout << "Enemy Initial value is set constructor called" << std::endl;
}

Enemy::Enemy()
{
	std::cout << "Enemy Default constructor called" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy Destructor called" << std::endl;
}

Enemy& 	Enemy::operator = (const Enemy& fixed)
{
	(void)fixed;
	std::cout << "Enemy Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Enemy& Enemy)
{
	os << "Enemy" << std::endl;
	os << " type : " << Enemy.getType() << std::endl;
	os << " hp   : " << Enemy.getHP() << std::endl;
    return os;
}