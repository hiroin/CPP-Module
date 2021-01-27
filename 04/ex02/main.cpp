/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 03:13:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void)
{
	std::cout << "----------";
	std::cout << "subject test";
	std::cout << "----------------------------------" << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << std::endl;
	std::cout << "----------";
	std::cout << "my test";
	std::cout << "----------------------------------" << std::endl;

	std::cout << "Create TacticalMarine" << std::endl;
	ISpaceMarine* bob = new TacticalMarine();
	std::cout << std::endl;

	std::cout << "Create AssaultTerminator" << std::endl;
	ISpaceMarine* jim = new AssaultTerminator;
	std::cout << std::endl;

	std::cout << "Create Squad" << std::endl;
	ISquad* vlc = new Squad;
	std::cout << "number of passengers : " << vlc->getCount() << std::endl;
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "take on board";
	std::cout << "----------------------------------" << std::endl;
	std::cout << "push(bob)" << std::endl;
	vlc->push(bob);
	std::cout << "number of passengers : " << vlc->getCount() << std::endl;
	std::cout << "getUnit(0)" << std::endl;
	std::cout << "getUnit(0) address : " << vlc->getUnit(0) << std::endl;
	std::cout << "bob's address      : " << bob << std::endl;
	std::cout << std::endl;
	
	std::cout << "push(jim)" << std::endl;
	vlc->push(jim);
	std::cout << "number of passengers : " << vlc->getCount() << std::endl;
	std::cout << "getUnit(1)" << std::endl;
	std::cout << "getUnit(1) address : " << vlc->getUnit(1) << std::endl;
	std::cout << "jim's address      : " << jim << std::endl;
	std::cout << std::endl;

	std::cout << "push(NULL)" << std::endl;
	vlc->push(NULL);
	std::cout << "number of passengers : " << vlc->getCount() << std::endl;
	std::cout << std::endl;

	std::cout << "push(bob) : Bob's already on it." << std::endl;
	vlc->push(bob);
	std::cout << "number of passengers : " << vlc->getCount() << std::endl;
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "copy constructor";
	std::cout << "----------------------------------" << std::endl;

	std::cout << "exec : vlcCopy(*(dynamic_cast<Squad*>(vlc)));" << std::endl;
	std::cout << std::endl;
	Squad vlcCopy(*(dynamic_cast<Squad*>(vlc)));
	std::cout << "number of passengers : " << vlcCopy.getCount() << std::endl;
	std::cout << "getUnit(0) address : " << vlcCopy.getUnit(0) << std::endl;
	std::cout << "getUnit(0) battleCry : ";
	vlcCopy.getUnit(0)->battleCry();
	std::cout << "getUnit(1) address : " << vlcCopy.getUnit(1) << std::endl;
	std::cout << "getUnit(1) battleCry : ";
	vlcCopy.getUnit(1)->battleCry();
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "assignation";
	std::cout << "----------------------------------" << std::endl;
	std::cout << "preparation" << std::endl;
	Squad vlcAssignation;
	ISpaceMarine* tacticalMarine_001 = new TacticalMarine();
	ISpaceMarine* tacticalMarine_002 = new TacticalMarine();
	ISpaceMarine* assaultTerminator_001 = new AssaultTerminator();
	vlcAssignation.push(tacticalMarine_001);
	vlcAssignation.push(tacticalMarine_002);
	vlcAssignation.push(assaultTerminator_001);
	std::cout << "number of passengers on the vlcAssignation : " << vlcAssignation.getCount() << std::endl;
	std::cout << std::endl;

	std::cout << "exec : vlcAssignation(3person) = vlc(2person)" << std::endl;
	std::cout << std::endl;
	vlcAssignation = (*(dynamic_cast<Squad*>(vlc)));
	std::cout << "number of passengers on the vlcAssignation : " << vlcAssignation.getCount() << std::endl;
	std::cout << "getUnit(0) address : " << vlcAssignation.getUnit(0) << std::endl;
	std::cout << "getUnit(0) battleCry : ";
	vlcAssignation.getUnit(0)->battleCry();
	std::cout << "getUnit(1) address : " << vlcAssignation.getUnit(1) << std::endl;
	std::cout << "getUnit(1) battleCry : ";
	vlcAssignation.getUnit(1)->battleCry();
	std::cout << std::endl;
	
	std::cout << "----------";
	std::cout << "post-processing";
	std::cout << "----------------------------------" << std::endl;
	delete vlc;

	return 0;
}
