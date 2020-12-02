/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/02 06:17:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>
#include <sstream>

void			Weapon::setType(std::string s)
{
	//type = &s;
	type->clear();
	type->append(s);
}

std::string & 	Weapon::getType() const
{
	return *type;
}

Weapon::Weapon()
{
	std::cout << "Weapon::Constractor is called : " << this << std::endl;
	type = NULL;
}

Weapon::Weapon(std::string s)
{
	std::cout << "Weapon::Constractor is called(std::string s) : " << this << std::endl;
	//type = &s;
	type = new std::string;
	type->append(s);
}

Weapon::~Weapon()
{
	std::cout << "Weapon::Destractor is called : " << this << std::endl;
	delete type;
}