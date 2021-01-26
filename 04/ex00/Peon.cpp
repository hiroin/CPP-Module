/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 05:56:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

void Peon::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	name_ = name;
}

Peon::Peon()
{
	std::cout << "Peon Default constructor called" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& other) : Victim(other)
{
	std::cout << "Peon Copy constructor called" << std::endl;
	*this = other;
}

Peon& 	Peon::operator=(const Peon& other)
{
	std::cout << "Peon Assignation operator called" << std::endl;
	if (this != &other)
	{
		Victim::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Peon& Peon)
{
	os << "I'm " << Peon.getName() << " and I like otters!" << std::endl;
    return os;
}