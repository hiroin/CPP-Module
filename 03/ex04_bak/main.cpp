/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/10 08:37:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

// int main(void)
// {
//     SuperTrap s_a;
//     std::cout << "\n\n\n" << std::endl;
//     FragTrap  f_a;
//     std::cout << "\n\n\n" << std::endl;
//     // NinjaTrap n_a;
//     // std::cout << "\n\n\n" << std::endl;


//     return 0;
// }

int main(void)
{
	SuperTrap s_a;
	SuperTrap s_b("SuperTrap_obj");
	ClapTrap c_a;
	

	// //std::cout << s_a << std::endl;
	// //std::cout << f_a << std::endl;
	// //std::cout << c_a << std::endl;

	s_b.NinjaTrap::rangedAttack("Enemy");
	s_b.NinjaTrap::meleeAttack("Enemy");
	s_b.NinjaTrap::takeDamage(10);
	s_b.NinjaTrap::takeDamage(10);
	s_b.NinjaTrap::beRepaired(10);

	// //f_a.vaulthunter_dot_exe("Boss");
	s_b.vaulthunter_dot_exe("Boss");
	s_b.ninjaShoebox(c_a);

	// std::cout << std::endl << std::endl << std::endl;
	// NinjaTrap n_a;
	// n_a.rangedAttack("Enemy");
	// n_a.meleeAttack("Enemy");
	// n_a.takeDamage(10);
	// n_a.takeDamage(10);
	// n_a.beRepaired(10);

	return 0;
}
