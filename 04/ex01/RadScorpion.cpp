/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 10:55:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "RadScorpion Default constructor called" << std::endl;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "RadScorpion Destructor called" << std::endl;
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other)
{
	std::cout << "RadScorpion Copy constructor called" << std::endl;
	*this = other;
}

RadScorpion& 	RadScorpion::operator=(const RadScorpion& other)
{
	std::cout << "RadScorpion Assignation operator called" << std::endl;
	if (this != &other)
	{
		Enemy::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const RadScorpion& RadScorpion)
{
	os << "RadScorpion" << std::endl;
	os << " type : " << RadScorpion.getType() << std::endl;
	os << " hp   : " << RadScorpion.getHP() << std::endl;
    return os;
}