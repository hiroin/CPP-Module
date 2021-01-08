/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 02:09:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "C Default constructor called" << std::endl;
}

C::~C()
{
	std::cout << "C Destructor called" << std::endl;
}

C::C(const C& other)
{
	std::cout << "C Copy constructor called" << std::endl;
}

C& 	C::operator = (const C& other)
{
	std::cout << "C Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const C& C)
{
	os << "-----------------------------------" << std::endl;
	os << "C" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
