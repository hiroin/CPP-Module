/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 12:54:35 by user42           ###   ########.fr       */
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
	Character* me = new Character("me");
	std::cout << *me;
	std::cout << std::endl;

	RadScorpion* rs = new RadScorpion();
	std::cout << *rs;
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

	me->attack(rs);
	std::cout << *rs;
	std::cout << std::endl;

	me->equip(pr);
	std::cout << *me;
	std::cout << std::endl;

	me->attack(rs);
	std::cout << *me;
	std::cout << *rs;
	std::cout << std::endl;

	// This attack will kill (delete) RadScorpion.
	me->attack(rs);
	std::cout << *me;

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;

	SuperMutant* sm = new SuperMutant();
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *me;
	std::cout << *sm;
	std::cout << std::endl;

	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	me->equip(pf);
	std::cout << *me;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << *sm;
	std::cout << std::endl;

	me->attack(sm);
	std::cout << std::endl;

	delete pr;
	delete pf;
	delete me;
	return 0;
}
