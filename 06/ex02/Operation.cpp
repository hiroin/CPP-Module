/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operation.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Operationreated: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 02:27:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operation.hpp"

int Operation::genRand(int min, int max)
{
	static int	flag;    
	if (flag == 0)
	{
		srand((unsigned int)time(NULL));
		rand();
		flag = 1;
	}
	int ret = min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
	return ret;
}

Base * Operation::generate(void)
{
	int	i;

	Base *base;
	i = genRand(0, 2);
	if (i == 0)
		base = new A();
	else if (i == 1)
		base = new B();
	else
		base = new C();
	return base;
}

void Operation::identify_from_pointer(Base * p)
{
	try
	{
		(void)dynamic_cast<A&>(*p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to A." << '\n';
	}
	try
	{
		(void)dynamic_cast<B&>(*p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to B." << '\n';
	}
	try
	{
		(void)dynamic_cast<C&>(*p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to C." << '\n';
	}
}

void Operation::identify_from_reference(Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to A." << '\n';
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to B." << '\n';
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't cast to C." << '\n';
	}
}

Operation::Operation()
{
	std::cout << "Operation Default constructor called" << std::endl;
}

Operation::~Operation()
{
	std::cout << "Operation Destructor called" << std::endl;
}

Operation::Operation(const Operation& other)
{
	std::cout << "Operation Operationopy constructor called" << std::endl;
}

Operation& 	Operation::operator = (const Operation& other)
{
	std::cout << "Operation Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Operation& operation)
{
	os << "-----------------------------------" << std::endl;
	os << "Operation" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
