/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2021/01/18 02:18:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w) : name(s), weapon(w) 
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