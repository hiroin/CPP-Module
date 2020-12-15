/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 03:25:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(void)
{
	//AWeapon pr("Plasma Rifle", 21, 5);
	//std::cout << pr;
	Character* me = new Character("me");
	std::cout << *me;
	std::cout << std::endl;

	AWeapon* pr = new PlasmaRifle();
	std::cout << *pr;
	std::cout << std::endl;

	AWeapon* pf = new PowerFist();
	std::cout << *pf;
	std::cout << std::endl;

	me->equip(pr);
	std::cout << *me;
	std::cout << std::endl;

	me->equip(pf);
	std::cout << *me;
	std::cout << std::endl;

	Enemy* e1 = new Enemy(100, "e1");
	std::cout << *e1;
	std::cout << std::endl;

	SuperMutant* sm = new SuperMutant();
	std::cout << *sm;
	std::cout << std::endl;

	RadScorpion* rs = new RadScorpion();
	std::cout << *rs;
	std::cout << std::endl;

	me->attack(rs);
	std::cout << *me;
	std::cout << *rs;
	std::cout << std::endl;

	me->attack(rs);
	std::cout << *me;
	//std::cout << *rs;
	//std::cout << std::endl;


	delete pr;
	delete pf;
	delete me;
	delete e1;
	delete sm;
	// delete rs;
	return 0;
}
