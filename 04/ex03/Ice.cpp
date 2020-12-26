/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 14:16:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

// void Ice::use(ICharacter& target)
// {
// 	(void)target;
// 	xp_ += 10;
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }

void Ice::outputMessage(ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice(type_);
	*ice = *this;
	return ice;
}

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Ice set type constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& ice)
{
	(void)ice;
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice& 	Ice::operator = (const Ice& fixed)
{
	(void)fixed;
	std::cout << "Ice Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Ice& ice)
{
	os << "Ice" << std::endl;
	os << " xp_ = " << ice.getXP() << std::endl;
	os << " type_ = " << ice.getType() << std::endl;
    return os;
}
