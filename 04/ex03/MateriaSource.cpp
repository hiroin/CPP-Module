/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/26 14:28:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <string>
#include <iostream>

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int		i;

	i = 0;
	while (i < maxMaterias_)
	{
		if (materias_[i] != NULL)
		{
			if (type == materias_[i]->getType())
			{
				return (materias_[i]->clone());
				break;
			}
		}
		i++;
	}
	return (NULL);
}

void MateriaSource::learnMateria(AMateria* m)
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
			std::cout << "learn " << materias_[i]->getType() << std::endl;
			break;
		}
		i++;
	}
}

MateriaSource::MateriaSource()
{
	int		i;

	std::cout << "MateriaSource Default constructor called" << std::endl;
	materias_ = new AMateria*[maxMaterias_];
	i = 0;
	while (i < maxMaterias_)
		materias_[i++] = NULL;
}

AMateria* MateriaSource::getMateria(int idx) const
{
	if (idx < 0 || idx >= maxMaterias_)
		return (NULL);
	if (materias_[idx] != NULL)
	{
		return (materias_[idx]);
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	int		i;
	std::cout << "MateriaSource Destructor called" << std::endl;

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

MateriaSource::MateriaSource(const MateriaSource& MateriaSource)
{
	int		i;
	std::cout << "MateriaSource Copy constructor called" << std::endl;

	materias_ = new AMateria*[maxMaterias_];
	i = 0;
	while (i < maxMaterias_)
	{
		if(MateriaSource.materias_[i] != NULL)
		{
			materias_[i] = MateriaSource.materias_[i]->clone();
		}
		else
		{
			materias_[i] = NULL;
		}
		
		i++;
	}
}

MateriaSource& 	MateriaSource::operator = (const MateriaSource& fixed)
{
	int		i;

	std::cout << "MateriaSource Assignation operator called" << std::endl;
	i = 0;
	while (i < maxMaterias_)
	{
		if(materias_[i] != NULL)
		{
			delete materias_[i] ;
		}
		i++;
	}
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

std::ostream&	operator<<(std::ostream& os, const MateriaSource& MateriaSource)
{
	int		i;
	
	os << "MateriaSource" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (MateriaSource.getMateria(i) != NULL)
		{
			os << " Materias : " << std::endl;
			os << "            " << MateriaSource.getMateria(i) << " : " << MateriaSource.getMateria(i)->getType() << std::endl;
		}
		i++;
	}
    return os;
}
