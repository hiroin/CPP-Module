/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/22 14:11:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>
#include <iostream>

int Squad::getCount() const
{
	return (count_);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i < 0 || i > count_)
		return (NULL);
	return (marines_[i]);
}

int Squad::push(ISpaceMarine* marine)
{
	int		i;
	
	i = 0;
	while (i < count_)
	{
		if (marines_[i] == marine)
		{
			return (count_);
		}
		i++;
	}	
	count_++;
	ISpaceMarine** tmp = new ISpaceMarine*[count_];
	i = 0;
	while (i < count_ - 1)
	{
		tmp[i] = marines_[i];
		i++;
	}
	tmp[i] = marine;
	if (count_ > 1)
		delete [] marines_;
	marines_ = tmp;	
	return (count_);
}

Squad::Squad(const Squad& Squad)
{
	int		i;

	std::cout << "Squad Copy constructor called" << std::endl;
	count_ = Squad.getCount();
	ISpaceMarine** tmp = new ISpaceMarine*[count_];
	i = 0;
	while (i < count_)
	{
		tmp[i] = Squad.getUnit(i)->clone();
		i++;
	}
	marines_ = tmp;	
}

Squad& 	Squad::operator = (const Squad& Squad)
{
	int		i;

	std::cout << "Squad Assignation operator called" << std::endl;
	i = 0;
	while (i < count_)
	{
		//delete marines_[i];
		delete this->getUnit(i);
		i++;
	}
	if (count_ > 0)
		delete marines_;
	count_ = Squad.getCount();
	ISpaceMarine** tmp = new ISpaceMarine*[count_];
	i = 0;
	while (i < count_)
	{
		tmp[i] = Squad.getUnit(i)->clone();
		i++;
	}
	marines_ = tmp;	
	return (*this);
}

Squad::Squad() : count_(0)
{
	std::cout << "Squad Default constructor called" << std::endl;
}

Squad::~Squad()
{
	int		i;

	std::cout << "Squad Destructor called" << std::endl;
	i = 0;
	while (i < count_)
	{
		delete marines_[i];
		i++;
	}
	if(count_ > 0)
		delete [] marines_;
}

std::ostream&	operator<<(std::ostream& os, const Squad& Squad)
{
	os << "Squad" << std::endl;
	os << " count_ : " << Squad.getCount() << std::endl;
    return os;
}
