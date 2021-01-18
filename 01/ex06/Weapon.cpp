/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2021/01/18 02:37:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void			Weapon::setType(const std::string& s)
{
	type = s;
}

std::string 	Weapon::getType() const
{
	return type;
}

Weapon::Weapon()
{
	std::cout << "Weapon::Constractor is called" << std::endl;
}

Weapon::Weapon(std::string s) : type(s)
{
	std::cout << "Weapon::Constractor is called(std::string s)" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon::Destractor is called" << std::endl;
}