/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 01:12:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a;
	ScavTrap b("No.001");

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	a.rangedAttack("Enemy");
	a.meleeAttack("Enemy");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();

	return 0;
}
