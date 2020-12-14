/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 05:55:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

std::string	Sorcerer::getName() const
{
	return name_;
}

std::string	Sorcerer::getTitle() const
{
	return title_;
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const & peon) const
{
	peon.getPolymorphed();
}

Sorcerer::Sorcerer(const Sorcerer& Sorcerer)
{
	(void)Sorcerer;
	std::cout << "Sorcerer Copy constructor called" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	name_ = name;
	title_ = title;
}

Sorcerer::Sorcerer()
{
	std::cout << "Sorcerer Default constructor called" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name_ << ", " << title_ << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& 	Sorcerer::operator = (const Sorcerer& fixed)
{
	(void)fixed;
	std::cout << "Sorcerer Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Sorcerer& Sorcerer)
{
	os << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}