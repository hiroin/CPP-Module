/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/28 06:09:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << "----------";
	std::cout << "subject test";
	std::cout << "----------------------------------" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	std::cout << "----------";
	std::cout << "my test";
	std::cout << "----------------------------------" << std::endl;
	std::cout << "//";
	std::cout << "// AMateria test";
	std::cout << "//";
	std::cout << "Create Ice" << std::endl;
	AMateria* ice_001 = new Ice();
	std::cout << *ice_001;
	std::cout << std::endl;

	std::cout << "Clone Ice" << std::endl;
	AMateria* ice_002 = ice_001->clone();
	std::cout << *ice_002;
	std::cout << std::endl;

	std::cout << "Create Cure" << std::endl;
	AMateria* cure_001 = new Cure();
	std::cout << *cure_001;
	std::cout << std::endl;

	std::cout << "Clone Cure" << std::endl;
	AMateria* cure_002 = cure_001->clone();
	std::cout << *cure_002;
	std::cout << std::endl;

	std::cout << "Clone one more Cure" << std::endl;
	AMateria* cure_003 = cure_001->clone();
	std::cout << *cure_003;
	std::cout << std::endl;

	std::cout << "Create Character 001" << std::endl;
	ICharacter* character_001 = new Character("001");
	Character* character_001_upcast = dynamic_cast<Character*>(character_001);
	std::cout << *character_001_upcast;
	std::cout << std::endl;
	
	std::cout << "Use ice as a character." << std::endl;
	ice_001->use(*character_001);

	std::cout << "ice status" << std::endl;
	std::cout << *ice_001 << std::endl;
	std::cout << std::endl;

	std::cout << "Use one more ice as a character." << std::endl;
	ice_001->use(*character_001);

	std::cout << "ice status" << std::endl;
	std::cout << *ice_001 << std::endl;
	std::cout << std::endl;

	std::cout << "Use cure as a character." << std::endl;
	cure_001->use(*character_001);

	std::cout << "cure status" << std::endl;
	std::cout << *cure_001 << std::endl;
	std::cout << std::endl;

	std::cout << "Use one more cure as a character." << std::endl;
	cure_001->use(*character_001);

	std::cout << "cure status" << std::endl;
	std::cout << *cure_001 << std::endl;
	std::cout << std::endl;

	std::cout << "Equip the character with NULL." << std::endl;
	character_001->equip(NULL);
	std::cout << std::endl;

	std::cout << "Equip your character with ice_001." << std::endl;
	character_001->equip(ice_001);
	std::cout << std::endl;

	std::cout << "Equip your character with ice_002." << std::endl;
	character_001->equip(ice_002);
	std::cout << std::endl;

	std::cout << "Equip your character with cure_001." << std::endl;
	character_001->equip(cure_001);
	std::cout << std::endl;

	std::cout << "Equip your character with cure_002." << std::endl;
	character_001->equip(cure_002);
	std::cout << std::endl;

	std::cout << "Equip your character with cure_003.The fifth materia cannot be equipped." << std::endl;
	character_001->equip(cure_003);
	std::cout << std::endl;

	std::cout << "Remove equipment number 0." << std::endl;
	character_001->unequip(0);
	std::cout << std::endl;

	std::cout << "Remove one more equipment number 0." << std::endl;
	character_001->unequip(0);
	std::cout << std::endl;

	std::cout << "Remove equipment number -1." << std::endl;
	character_001->unequip(-1);
	std::cout << std::endl;

	std::cout << "Remove equipment number 100." << std::endl;
	character_001->unequip(100);
	std::cout << std::endl;

	std::cout << "Equip your character with cure_003." << std::endl;
	character_001->equip(cure_003);
	std::cout << std::endl;

	std::cout << "Use materia number 0 for character_001 for character_001." << std::endl;
	character_001->use(0, *character_001);
	std::cout << std::endl;

	std::cout << "Use materia number 1 for character_001 for character_001." << std::endl;
	character_001->use(1, *character_001);
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "character copy constructor";
	std::cout << "----------------------------------" << std::endl;
	std::cout << "preparation" << std::endl;
	Character character_002("002");
	AMateria* ice_010 = new Ice();
	character_002.equip(ice_010);
	AMateria* cure_010 = new Cure();
	character_002.equip(cure_010);
	std::cout << character_002;
	std::cout << std::endl;

	std::cout << "copy constructor" << std::endl;
	Character character_003(character_002);
	std::cout << std::endl;

	std::cout << character_003;
	std::cout << std::endl;

	character_003.use(0, *character_001);
	character_003.use(1, character_002);
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "character assignation";
	std::cout << "----------------------------------" << std::endl;
	character_003 = *(dynamic_cast<Character*>(character_001));
	std::cout << std::endl;

	std::cout << character_003;
	std::cout << std::endl;

	character_003.use(0, *character_001);
	character_003.use(1, character_002);
	character_003.use(2, *character_001);
	character_003.use(3, character_002);
	std::cout << std::endl;
	
	std::cout << "----------";
	std::cout << "MateriaSource test";
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Create MateriaSource.";
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	std::cout << "learnMateria Ice";
	src->learnMateria(new Ice());
	std::cout << std::endl;

	std::cout << "learnMateria Cure";
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "learnMateria Ice";
	src->learnMateria(new Ice());
	std::cout << std::endl;

	std::cout << "learnMateria Cure";
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "learnMateria Cure.";
	std::cout << "You can only learn up to five materia, so don't learn them.";
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "learnMateria NULL.";
	src->learnMateria(NULL);
	std::cout << std::endl;

	std::cout << "Create a character named me.";
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "Defining AMateria variable.";
	AMateria* tmp;
	std::cout << std::endl;

	std::cout << "Create materiel from source.";
	tmp = src->createMateria("ice");
	std::cout << std::endl;

	std::cout << "Equip your character with the materia you created.";
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "Create materiel from source.";
	tmp = src->createMateria("cure");
	std::cout << std::endl;

	std::cout << "Equip your character with the materia you created.";
	me->equip(tmp);	
	std::cout << std::endl;

	Character* me_upcast = dynamic_cast<Character*>(me);
	std::cout << *me_upcast;
	std::cout << std::endl;

	std::cout << "Create a materia that is not in the materia source";
	tmp = src->createMateria("");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "----------";
	std::cout << "post-processing";
	std::cout << "----------------------------------" << std::endl;
	delete me;
	delete src;
	delete character_001;
	delete ice_001;

	return 0;
}
