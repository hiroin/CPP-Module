/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:54:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure *cure = new Cure();
	*cure = *this;
	return cure;
}

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure& 	Cure::operator=(const Cure& other)
{
	std::cout << "Cure Assignation operator called" << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cure& cure)
{
	os << "Cure" << std::endl;
	os << " xp_ = " << cure.getXP() << std::endl;
	os << " type_ = " << cure.getType() << std::endl;
    return os;
}
