/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 03:40:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// ClapTrap c_a;
	// ClapTrap c_b(100,100,100,1,"No.001",30,20,5);

	// std::cout << c_a << std::endl;
	// std::cout << c_b << std::endl;

	// c_b.rangedAttack("Enemy");
	// c_b.meleeAttack("Enemy");
	// c_b.takeDamage(10);
	// c_b.takeDamage(10);
	// c_b.beRepaired(10);

	//FragTrap f_a;
	FragTrap f_b(100,100,100,100,1,"No.001",30,20,5);

	std::cout << f_b << std::endl;

	f_b.rangedAttack("Enemy");
	f_b.meleeAttack("Enemy");
	f_b.takeDamage(10);
	f_b.takeDamage(10);
	f_b.beRepaired(10);
	f_b.vaulthunter_dot_exe("Boss");
	f_b.vaulthunter_dot_exe("Boss");
	f_b.vaulthunter_dot_exe("Boss");
	f_b.vaulthunter_dot_exe("Boss");
	f_b.vaulthunter_dot_exe("Boss");

	//ScavTrap s_a;
	ScavTrap s_b(100,100,50,100,1,"No.002",20,15,3);

	std::cout << s_b << std::endl;

	s_b.rangedAttack("Enemy");
	s_b.meleeAttack("Enemy");
	s_b.takeDamage(10);
	s_b.takeDamage(10);
	s_b.beRepaired(10);
	s_b.challengeNewcomer();
	s_b.challengeNewcomer();
	s_b.challengeNewcomer();
	s_b.challengeNewcomer();
	s_b.challengeNewcomer();

	return 0;
}
