/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 03:42:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
clang++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address *.cpp
clang++ -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address,leak *.cpp
*/
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("No.001");

	std::cout << "rangedAttack" << std::endl;
	a.rangedAttack("Enemy");
	std::cout << std::endl;

	std::cout << "meleeAttack" << std::endl;
	a.meleeAttack("Enemy");
	std::cout << std::endl;

	std::cout << "Current state" << std::endl;
	std::cout << a << std::endl;

	a.takeDamage(10);
	std::cout << std::endl;
	a.takeDamage(10);
	std::cout << std::endl;
	a.takeDamage(100);
	std::cout << std::endl;
	a.takeDamage(100);
	std::cout << std::endl;
	a.takeDamage(0);
	std::cout << std::endl;
	a.takeDamage(-10);
	std::cout << std::endl;

	a.beRepaired(10);
	std::cout << std::endl;
	a.beRepaired(10);
	std::cout << std::endl;
	a.beRepaired(100);
	std::cout << std::endl;
	a.beRepaired(0);
	std::cout << std::endl;
	a.beRepaired(-1);
	std::cout << std::endl;

	a.vaulthunter_dot_exe("Boss");
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << a << std::endl;
	a.vaulthunter_dot_exe("Boss");
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << a << std::endl;
	a.vaulthunter_dot_exe("Boss");
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << a << std::endl;
	a.vaulthunter_dot_exe("Boss");
	std::cout << std::endl;
	std::cout << "Current state" << std::endl;
	std::cout << a << std::endl;
	a.vaulthunter_dot_exe("Boss");
	std::cout << std::endl;
	return 0;
}
