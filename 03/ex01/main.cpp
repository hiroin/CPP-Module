/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 12:17:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap st("No.002");

	std::cout << "rangedAttack" << std::endl;
	st.rangedAttack("Enemy");
	std::cout << std::endl;

	std::cout << "meleeAttack" << std::endl;
	st.meleeAttack("Enemy");
	std::cout << std::endl;

	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;

	st.takeDamage(10);
	std::cout << std::endl;
	st.takeDamage(10);
	std::cout << std::endl;
	st.takeDamage(100);
	std::cout << std::endl;
	st.takeDamage(100);
	std::cout << std::endl;
	st.takeDamage(0);
	std::cout << std::endl;
	st.takeDamage(-10);
	std::cout << std::endl;

	st.beRepaired(10);
	std::cout << std::endl;
	st.beRepaired(10);
	std::cout << std::endl;
	st.beRepaired(100);
	std::cout << std::endl;
	st.beRepaired(0);
	std::cout << std::endl;
	st.beRepaired(-1);
	std::cout << std::endl;

	st.challengeNewcomer();
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;	
	st.challengeNewcomer();
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;	
	st.challengeNewcomer();
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;	
	st.challengeNewcomer();
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << st << std::endl;	
	st.challengeNewcomer();

	return 0;
}
