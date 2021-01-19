/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 02:35:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	//setRawBits(other.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& 	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(fixed.getRawBits());
	return (*this);
}