/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 06:11:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <string>
#include <iostream>

void Peon::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(const Peon& Peon)
{
	(void)Peon;
	std::cout << "Peon Copy constructor called" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	//std::cout << "Some random Peon called " << name << " just appeared!" << std::endl;
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
	//std::cout << "Victim " << name_<< " just died for no apparent reason!" << std::endl;
}

Peon& 	Peon::operator = (const Peon& fixed)
{
	(void)fixed;
	std::cout << "Peon Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Peon& Peon)
{
	os << "I am " << Peon.getName() << " and I like otters!" << std::endl;
    return os;
}