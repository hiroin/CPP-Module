/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 06:57:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	NinjaTrap n_a("Sasuke");
	NinjaTrap n_b("Hanzo");
	ClapTrap c_a("ClapTrap");
	ScavTrap s_a("ScavTrap");
	FragTrap f_a("FragTrap");
	std::cout << std::endl;	
	
	std::cout << "rangedAttack" << std::endl;
	n_a.rangedAttack("Enemy");
	std::cout << "meleeAttack" << std::endl;
	n_a.meleeAttack("Enemy");
	std::cout << std::endl;	

	n_a.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << n_a << std::endl;

	n_a.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << n_a << std::endl;	

	n_a.beRepaired(10);
	std::cout << "Current state" << std::endl;
	std::cout << n_a << std::endl;
	
	n_a.ninjaShoebox(c_a);
	std::cout << std::endl;	
	n_a.ninjaShoebox(s_a);
	std::cout << std::endl;	
	n_a.ninjaShoebox(f_a);
	std::cout << "Current state FragTrap" << std::endl;
	std::cout << f_a << std::endl;
	std::cout << "Current state NinjaTrap" << std::endl;
	std::cout << n_a << std::endl;
	n_a.ninjaShoebox(n_b);
	std::cout << std::endl;	

	return 0;
}
