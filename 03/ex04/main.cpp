/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:56:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap st("SuperTrap");
	ClapTrap ct("ClapTrap");
	std::cout << st << std::endl;
	
	std::cout << "rangedAttack" << std::endl;
	st.rangedAttack("Enemy");
	std::cout << "meleeAttack" << std::endl;
	st.meleeAttack("Enemy");
	
	st.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.takeDamage(10);
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.beRepaired(10);
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.vaulthunter_dot_exe("Boss");
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.ninjaShoebox(ct);
	std::cout << st << std::endl;

	return 0;
}
