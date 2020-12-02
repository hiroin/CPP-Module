/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:15:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/02 06:46:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon	club("crude spiked club");
		// std::cout << club.getType() << std::endl;
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		// std::cout << club.getType() << std::endl;
		bob.attack();
	}
	{
		Weapon	club("crude spiked club");
		// std::cout << club.getType() << std::endl;
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		// std::cout << club.getType() << std::endl;
		jim.attack();
	}
}