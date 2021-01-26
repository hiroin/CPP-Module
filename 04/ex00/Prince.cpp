/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prince.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:23:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Prince.hpp"

void Prince::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a scarecrow!" << std::endl;
}

Prince::Prince(std::string name) : Victim(name)
{
	std::cout << "Hi, hello." << std::endl;
	name_ = name;
}

Prince::Prince()
{
	std::cout << "Prince Default constructor called" << std::endl;
}

Prince::~Prince()
{
	std::cout << "Goodbye everyone!" << std::endl;
}

Prince::Prince(const Prince& other) : Victim(other)
{
	std::cout << "Prince Copy constructor called" << std::endl;
	
}

Prince& 	Prince::operator=(const Prince& other)
{
	std::cout << "Prince Assignation operator called" << std::endl;
	if (this != &other)
	{
		Victim::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Prince& Prince)
{
	os << "I'm " << Prince.getName() << " and I'm a prince!" << std::endl;
    return os;
}