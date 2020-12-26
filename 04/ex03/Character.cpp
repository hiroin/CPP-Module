/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 10:53:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

std::string const & Character::getName() const
{
	return name_;
}

Character::Character()
{
	int		i;

	std::cout << "Character Default constructor called" << std::endl;
	name_ = "default";
	materias_ = new AMateria*[maxMaterias_];
	i = 0;
	while (i < maxMaterias_)
		materias_[i++] = NULL;
}

Character::Character(std::string const & name) : name_(name)
{
	int		i;

	std::cout << "Character Name constructor called" << std::endl;
	name_ = name;
	materias_ = new AMateria*[maxMaterias_];
	i = 0;
	while (i < maxMaterias_)
		materias_[i++] = NULL;
}

void Character::equip(AMateria* m)
{
	int		i;

	if (m == NULL)
		return;
	i = 0;
	while (i < maxMaterias_)
	{
		if (materias_[i] == NULL)
		{
			materias_[i] = m;
			std::cout << "Character equip " << materias_[i]->getType() << std::endl;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= maxMaterias_)
		return;
	if (materias_[idx] != NULL)
	{
		std::cout << "Character unequip " << materias_[idx]->getType() << std::endl;
		materias_[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= maxMaterias_)
		return;
	if (materias_[idx] != NULL)
	{
		std::cout << "Character use " << materias_[idx]->getType() << std::endl;
		materias_[idx]->use(target);
	}
}

AMateria* Character::getMateria(int idx) const
{
	if (idx < 0 || idx >= maxMaterias_)
		return (NULL);
	if (materias_[idx] != NULL)
	{
		return (materias_[idx]);
	}
	return (NULL);
}

Character::~Character()
{
	int		i;
	std::cout << "Character Destructor called" << std::endl;

	i = 0;
	while (i < maxMaterias_)
	{
		if(materias_[i] != NULL)
		{
			delete materias_[i] ;
		}
		i++;
	}	
	delete [] materias_;
}

Character::Character(const Character& character)
{
	int		i;
	std::cout << "Character Copy constructor called" << std::endl;

	name_ = character.name_;
	materias_ = new AMateria*[maxMaterias_];
	i = 0;
	while (i < maxMaterias_)
	{
		if(character.materias_[i] != NULL)
		{
			materias_[i] = character.materias_[i]->clone();
		}
		else
		{
			materias_[i] = NULL;
		}
		
		i++;
	}
}

Character& 	Character::operator = (const Character& fixed)
{
	int		i;

	std::cout << "Character Assignation operator called" << std::endl;
	i = 0;
	while (i < maxMaterias_)
	{
		if(materias_[i] != NULL)
		{
			delete materias_[i] ;
		}
		i++;
	}
	name_ = fixed.name_;
	i = 0;
	while (i < maxMaterias_)
	{
		if(fixed.materias_[i] != NULL)
		{
			materias_[i] = fixed.materias_[i]->clone();
		}
		else
		{
			materias_[i] = NULL;
		}
		
		i++;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Character& Character)
{
	int		i;
	
	os << "Character" << std::endl;
	os << " name : " << Character.getName() << std::endl;

	i = 0;
	while (i < 4)
	{
		if (Character.getMateria(i) != NULL)
		{
			os << " Materias : " << std::endl;
			os << "            " << Character.getMateria(i) << " : " << Character.getMateria(i)->getType() << std::endl;
		}
		i++;
	}
    return os;
}
