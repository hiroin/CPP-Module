/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 09:04:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a;
	FragTrap b("No.001");

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	a.rangedAttack("Enemy");
	a.meleeAttack("Enemy");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	a.vaulthunter_dot_exe("Boss");
	a.vaulthunter_dot_exe("Boss");
	a.vaulthunter_dot_exe("Boss");
	a.vaulthunter_dot_exe("Boss");
	a.vaulthunter_dot_exe("Boss");

	return 0;
}
