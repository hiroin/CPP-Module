/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 01:58:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft("FragTrap No.001");

	std::cout << "rangedAttack" << std::endl;
	ft.rangedAttack("Enemy");
	std::cout << "meleeAttack" << std::endl;
	ft.meleeAttack("Enemy");
	std::cout << std::endl;	

	ft.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << ft << std::endl;

	ft.beRepaired(10);
	std::cout << "Current state" << std::endl;
	std::cout << ft << std::endl;

	ft.vaulthunter_dot_exe("Boss");
	std::cout << "Current state" << std::endl;
	std::cout << ft << std::endl;

	std::cout << "------------------------------------" << std::endl;	

	ScavTrap st("ScavTrap No.002");

	std::cout << "rangedAttack" << std::endl;
	st.rangedAttack("Enemy");
	std::cout << "meleeAttack" << std::endl;
	st.meleeAttack("Enemy");
	std::cout << std::endl;	
	
	st.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.beRepaired(10);
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;
		
	st.challengeNewcomer();
	std::cout << std::endl;	

	return 0;
}
