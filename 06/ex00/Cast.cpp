/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 07:10:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()
{
	std::cout << "Cast Default constructor called" << std::endl;
}

Cast::Cast(std::string name)
{
	std::cout << "Cast Name constructor called" << std::endl;
}

Cast::~Cast()
{
	std::cout << "Cast Destructor called" << std::endl;
}

Cast::Cast(const Cast& Cast)
{
	std::cout << "Cast Copy constructor called" << std::endl;
}

Cast& 	Cast::operator = (const Cast& fixed)
{
	std::cout << "Cast Assignation operator called" << std::endl;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cast& other)
{
	os << "-----------------------------------" << std::endl;
	os << "Cast" << std::endl;
    return os;
}
