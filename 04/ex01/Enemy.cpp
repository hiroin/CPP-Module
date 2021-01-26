/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 11:11:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

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
	if (damage < 0)
		return;
	hp_ = hp_ - damage;
	if (hp_ < 0)
		hp_ = 0;
}

Enemy::Enemy(int hp, std::string const & type) : type_(type), hp_(hp)
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

Enemy::Enemy(const Enemy& other)
{
	std::cout << "Enemy Copy constructor called" << std::endl;
	*this = other;
}

Enemy& 	Enemy::operator=(const Enemy& other)
{
	std::cout << "Enemy Assignation operator called" << std::endl;
	if (this != &other)
	{
		type_ = other.type_;
		hp_ = other.hp_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Enemy& Enemy)
{
	os << "Enemy" << std::endl;
	os << " type : " << Enemy.getType() << std::endl;
	os << " hp   : " << Enemy.getHP() << std::endl;
    return os;
}