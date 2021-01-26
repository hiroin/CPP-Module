/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 06:17:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

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

void Sorcerer::polymorph(Prince const & prince) const
{
	prince.getPolymorphed();
}

Sorcerer::Sorcerer(std::string name, std::string title) : name_(name), title_(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer()
{
	std::cout << "Sorcerer Default constructor called" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name_ << ", " << title_ << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
	std::cout << "Sorcerer Copy constructor called" << std::endl;
	*this = other;
}

Sorcerer& 	Sorcerer::operator=(const Sorcerer& other)
{
	std::cout << "Sorcerer Assignation operator called" << std::endl;
	if (this != &other)
	{
		name_ = other.name_;
		title_ = other.title_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Sorcerer& Sorcerer)
{
	os << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}