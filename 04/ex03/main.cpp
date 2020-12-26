/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 14:32:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	// AMateria* materia_001 = new AMateria();
	// AMateria* materia_002 = new AMateria("red");
	// std::cout << *materia_002;
	// AMateria* ice_001 = new Ice("ice");
	// std::cout << *ice_001;

	// AMateria* ice_002 = ice_001->clone();
	// std::cout << *ice_002;

	// AMateria* cure_001 = new Cure("cure");
	// std::cout << *cure_001;

	// AMateria* cure_002 = cure_001->clone();
	// std::cout << *cure_002;

	// AMateria* cure_003 = cure_001->clone();
	// std::cout << *cure_003;

	// ICharacter* character_001 = new Character("001");
	// Character* character_001_upcast = dynamic_cast<Character*>(character_001);
	// std::cout << *character_001_upcast;
	
	// //void Ice::use(ICharacter& target)
	// ice_001->use(*character_001);
	// ice_002->use(*character_001);
	// cure_001->use(*character_001);

	// character_001->equip(NULL);
	// character_001->equip(ice_001);
	// character_001->equip(ice_002);
	// character_001->equip(cure_001);
	// character_001->equip(cure_002);
	// character_001->equip(cure_003);

	// character_001->unequip(0);

	// character_001->equip(cure_003);

	// character_001->use(0, *character_001);
	// character_001->use(1, *character_001);

	Character character_002("002");
	AMateria* ice_010 = new Ice("ice");
	character_002.equip(ice_010);
	AMateria* cure_010 = new Cure("cure");
	character_002.equip(cure_010);
	std::cout << character_002;

	Character character_003(character_002);
	std::cout << character_003;

	std::cout << std::endl << std::endl;
	Character character_004("004");
	AMateria* ice_011 = new Ice("ice");
	character_004.equip(ice_011);
	std::cout << character_004;

	character_004 = character_002;
	std::cout << character_004;

	std::cout << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);	
	Character* me_upcast = dynamic_cast<Character*>(me);
	std::cout << *me_upcast;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;
	
	// delete character_001;
	// delete ice_001;
	// delete ice_002;
	// delete cure_001;
	// delete cure_002;
	// delete cure_003;
	// delete materia_002;
	// delete materia_001;

	return 0;
}
