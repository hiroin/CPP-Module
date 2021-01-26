/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 06:23:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

std::string	Victim::getName() const
{
	return name_;
}

void Victim::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(std::string name) :name_(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim()
{
	std::cout << "Victim Default constructor called" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name_<< " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& other)
{
	std::cout << "Victim Copy constructor called" << std::endl;
	*this = other;
}

Victim& 	Victim::operator=(const Victim& other)
{
	std::cout << "Victim Assignation operator called" << std::endl;
	if (this != &other)
	{
		name_ = other.name_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Victim& Victim)
{
	os << "I'm " << Victim.getName() << " and I like otters!" << std::endl;
    return os;
}