/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 13:43:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

void AMateria::use(ICharacter& target)
{
	(void)target;
	xp_ += 10;
	//outputMessage(target);
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

AMateria::AMateria() : type_("default"), xp_(0) 
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type_(type), xp_(0)
{
	std::cout << "AMateria set type constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria& 	AMateria::operator=(const AMateria& other)
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	if (this != &other)
	{
		xp_ = other.xp_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AMateria& AMateria)
{
	os << "AMateria" << std::endl;
	os << " xp_ = " << AMateria.getXP() << std::endl;
	os << " type_ = " << AMateria.getType() << std::endl;
    return os;
}
