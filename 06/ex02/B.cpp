/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 02:09:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "B Default constructor called" << std::endl;
}

B::~B()
{
	std::cout << "B Destructor called" << std::endl;
}

B::B(const B& other)
{
	std::cout << "B Copy constructor called" << std::endl;
}

B& 	B::operator = (const B& other)
{
	std::cout << "B Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const B& B)
{
	os << "-----------------------------------" << std::endl;
	os << "B" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
