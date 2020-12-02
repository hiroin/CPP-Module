/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/02 03:55:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w) : weapon(w), name(s)
{
	std::cout << "HumanA::Constractor is called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA::Destractor is called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}