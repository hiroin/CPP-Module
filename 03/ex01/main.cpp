/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 01:31:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap c;
	FragTrap d("No.001");

	std::cout << c << std::endl;
	std::cout << d << std::endl;

	c.rangedAttack("Enemy");
	c.meleeAttack("Enemy");
	c.takeDamage(10);
	c.takeDamage(10);
	c.beRepaired(10);
	c.vaulthunter_dot_exe("Boss");
	c.vaulthunter_dot_exe("Boss");
	c.vaulthunter_dot_exe("Boss");
	c.vaulthunter_dot_exe("Boss");
	c.vaulthunter_dot_exe("Boss");
		
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
