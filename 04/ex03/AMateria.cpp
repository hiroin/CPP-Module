/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 09:11:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

void AMateria::use(ICharacter& target)
{
	(void)target;
	xp_ += 10;
	outputMessage(target);
}

// void AMateria::outputMessage(ICharacter& target) const
// {
// 	(void)target;
// }

unsigned int AMateria::getXP() const
{
	return xp_;
}

std::string const & AMateria::getType() const
{
	return type_;
}

AMateria::AMateria() : xp_(0)
{
	std::cout << "AMateria Default constructor called" << std::endl;
	type_ = "default";
}

AMateria::AMateria(std::string const & type) : xp_(0)
{
	std::cout << "AMateria set type constructor called" << std::endl;
	type_ = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& AMateria)
{
	(void)AMateria;
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& 	AMateria::operator = (const AMateria& fixed)
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	xp_ = fixed.xp_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AMateria& AMateria)
{
	os << "AMateria" << std::endl;
	os << " xp_ = " << AMateria.getXP() << std::endl;
	os << " type_ = " << AMateria.getType() << std::endl;
    return os;
}
