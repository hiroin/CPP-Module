/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 04:45:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

std::deque<int>::iterator MutantStack::begin()
{
	return c.begin();
}

std::deque<int>::const_iterator MutantStack::begin() const
{
	return c.begin();
}

std::deque<int>::iterator MutantStack::end()
{
	return c.end();
}

std::deque<int>::const_iterator MutantStack::end() const
{
	return c.end();
}

std::deque<int>::reverse_iterator MutantStack::rbegin()
{
	return c.rbegin();
}

std::deque<int>::const_reverse_iterator MutantStack::rbegin() const
{
	return c.rbegin();
}

std::deque<int>::reverse_iterator MutantStack::rend()
{
	return c.rend();
}

std::deque<int>::const_reverse_iterator MutantStack::rend() const
{
	return c.rend();
}

MutantStack::MutantStack()
{
	std::cout << "mutantstack Default constructor called" << std::endl;
}

MutantStack::~MutantStack()
{
	std::cout << "mutantstack Destructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack& other) : stack(other)
{
	std::cout << "mutantstack Copy constructor called" << std::endl;
}

MutantStack& 	MutantStack::operator = (const MutantStack& other)
{
	std::cout << "mutantstack Assignation operator called" << std::endl;
	if (this != &other)
	{ 
		stack::operator=(other);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const MutantStack& bureaucrat)
{
	os << "-----------------------------------" << std::endl;
	os << "mutantstack" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
