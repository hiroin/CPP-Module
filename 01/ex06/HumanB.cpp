/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/02 06:37:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string s) : name(s)
{
	std::cout << "HumanB::Constractor is called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB::Destractor is called" << std::endl;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}