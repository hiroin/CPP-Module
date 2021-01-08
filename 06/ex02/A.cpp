/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 02:07:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "A Default constructor called" << std::endl;
}

A::~A()
{
	std::cout << "A Destructor called" << std::endl;
}

A::A(const A& other)
{
	std::cout << "A Copy constructor called" << std::endl;
}

A& 	A::operator = (const A& other)
{
	std::cout << "A Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const A& A)
{
	os << "-----------------------------------" << std::endl;
	os << "A" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
