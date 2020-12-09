/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/09 09:28:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	NinjaTrap n_a;
	ClapTrap c_a;
	ScavTrap s_a;
	FragTrap f_a;
	

	std::cout << n_a << std::endl;

	n_a.rangedAttack("Enemy");
	n_a.meleeAttack("Enemy");
	n_a.takeDamage(10);
	n_a.takeDamage(10);
	n_a.beRepaired(10);

	n_a.ninjaShoebox(c_a);
	n_a.ninjaShoebox(s_a);
	n_a.ninjaShoebox(f_a);
	n_a.ninjaShoebox(n_a);

	return 0;
}
