/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 14:16:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

// void Cure::use(ICharacter& target)
// {
// 	(void)target;
// 	xp_ += 10;
// 	std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
// }

void Cure::outputMessage(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure(type_);
	*cure = *this;
	return cure;
}

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Cure set type constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& cure)
{
	(void)cure;
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure& 	Cure::operator = (const Cure& fixed)
{
	(void)fixed;
	std::cout << "Cure Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cure& cure)
{
	os << "Cure" << std::endl;
	os << " xp_ = " << cure.getXP() << std::endl;
	os << " type_ = " << cure.getType() << std::endl;
    return os;
}
