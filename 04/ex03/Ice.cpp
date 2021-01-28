/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:51:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// void Ice::outputMessage(ICharacter& target) const
// {
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }

AMateria* Ice::clone() const
{
	Ice *ice = new Ice();
	*ice = *this;
	return ice;
}

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice& 	Ice::operator=(const Ice& other)
{
	std::cout << "Ice Assignation operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Ice& ice)
{
	os << "Ice" << std::endl;
	os << " xp_ = " << ice.getXP() << std::endl;
	os << " type_ = " << ice.getType() << std::endl;
    return os;
}
