/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/27 03:00:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

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
	
	if (!marine)
		return (count_);
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

Squad::Squad(const Squad& other) : count_(0)
{
	std::cout << "Squad Copy constructor called" << std::endl;
	*this = other;
}

Squad& 	Squad::operator=(const Squad& other)
{
	int		i;

	std::cout << "Squad Assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	i = 0;
	while (i < count_)
	{
		delete marines_[i];
		i++;
	}
	if (count_ > 0)
		delete [] marines_;
	count_ = other.getCount();
	ISpaceMarine** tmp = new ISpaceMarine*[count_];
	i = 0;
	while (i < count_)
	{
		tmp[i] = other.getUnit(i)->clone();
		i++;
	}
	marines_ = tmp;	
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Squad& Squad)
{
	os << "Squad" << std::endl;
	os << " count_ : " << Squad.getCount() << std::endl;
    return os;
}
