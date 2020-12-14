/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 06:09:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

std::string	Victim::getName() const
{
	return name_;
}

void Victim::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const Victim& Victim)
{
	(void)Victim;
	std::cout << "Victim Copy constructor called" << std::endl;
}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	name_ = name;
}

Victim::Victim()
{
	//std::cout << "Victim Default constructor called" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name_<< " just died for no apparent reason!" << std::endl;
}

Victim& 	Victim::operator = (const Victim& fixed)
{
	(void)fixed;
	std::cout << "Victim Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Victim& Victim)
{
	os << "I am " << Victim.getName() << " and I like otters!" << std::endl;
    return os;
}