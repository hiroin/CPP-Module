/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2021/01/18 02:26:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void			Weapon::setType(const std::string& s)
{
	type->clear();
	type->append(s);
	// delete type;
	// type = new std::string(s);	
}

std::string & 	Weapon::getType() const
{
	return *type;
}

Weapon::Weapon()
{
	std::cout << "Weapon::Constractor is called" << std::endl;
}

Weapon::Weapon(std::string s) : type(new std::string(s))
{
	std::cout << "Weapon::Constractor is called(std::string s)" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon::Destractor is called" << std::endl;
	delete type;
}