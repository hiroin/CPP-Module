/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 14:12:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void)
{
	// ISpaceMarine* bob = new TacticalMarine();
	// TacticalMarine* bob_u = dynamic_cast<TacticalMarine*>(bob);

	// std::cout << bob << std::endl;
	// std::cout << *bob_u << std::endl;

	// ISpaceMarine* bob_clone = bob->clone();
	// TacticalMarine* bob_clone_u = dynamic_cast<TacticalMarine*>(bob_clone);
	// std::cout << bob_clone << std::endl;
	// std::cout << *bob_clone_u << std::endl;

	// ISpaceMarine* jim = new AssaultTerminator;

	// ISquad* vlc = new Squad;
	// Squad* vlc_u = dynamic_cast<Squad*>(vlc);
	// std::cout << *vlc_u << std::endl;

	// std::cout << std::endl;
	// std::cout << vlc->getCount() << std::endl;
	// vlc->push(bob);
	// std::cout << vlc->getCount() << std::endl;
	// vlc->getUnit(0);
	// TacticalMarine* tmpTacticalMarine = dynamic_cast<TacticalMarine*>(vlc->getUnit(0));
	// std::cout << *tmpTacticalMarine;
	// vlc->push(jim);
	// std::cout << vlc->getCount() << std::endl;
	// tmpTacticalMarine = dynamic_cast<TacticalMarine*>(vlc->getUnit(0));
	// std::cout << *tmpTacticalMarine;
	// AssaultTerminator* tmpAssaultTerminator = dynamic_cast<AssaultTerminator*>(vlc->getUnit(1));
	// std::cout << *tmpAssaultTerminator;

	// //同じユニットを加えたときに無視する
	// std::cout << "push(bob)" << std::endl;
	// vlc->push(bob);
	// std::cout << vlc->getCount() << std::endl;

	//コピーコンストラクタ
	// std::cout << "--------------------" << std::endl;
	// std::cout << "copy construction" << std::endl;
	// ISpaceMarine* tacticalMarine_001 = new TacticalMarine();
	// ISpaceMarine* assaultTerminator_001 = new AssaultTerminator();
	// Squad vlc_cc;
	// vlc_cc.push(tacticalMarine_001);
	// vlc_cc.push(assaultTerminator_001);
	// Squad vlc_cc_copy = vlc_cc;
	// std::cout << vlc_cc.getCount() << std::endl;
	// std::cout << vlc_cc_copy.getCount() << std::endl;
	// TacticalMarine* tmpTacticalMarine = dynamic_cast<TacticalMarine*>(vlc_cc_copy.getUnit(0));
	// std::cout << *tmpTacticalMarine;
	// AssaultTerminator* tmpAssaultTerminator = dynamic_cast<AssaultTerminator*>(vlc_cc_copy.getUnit(1));
	// std::cout << *tmpAssaultTerminator;
	// std::cout << "--------------------" << std::endl;

	//代入演算子
	std::cout << "--------------------" << std::endl;
	std::cout << "assignation" << std::endl;
	ISpaceMarine* tacticalMarine_001 = new TacticalMarine();
	ISpaceMarine* tacticalMarine_002 = new TacticalMarine();
	ISpaceMarine* assaultTerminator_001 = new AssaultTerminator();
	Squad vlc_cc;
	vlc_cc.push(tacticalMarine_001);
	vlc_cc.push(assaultTerminator_001);
	std::cout << vlc_cc.getCount() << std::endl;
	Squad vlc_cc_assignation;
	vlc_cc_assignation.push(tacticalMarine_002);
	std::cout << vlc_cc_assignation.getCount() << std::endl;
	vlc_cc_assignation = vlc_cc;
	std::cout << vlc_cc_assignation.getCount() << std::endl;
	std::cout << "--------------------" << std::endl;

	// delete vlc;
	// //delete bob;
	// delete bob_clone;
	// //delete jim;

	return 0;
}
