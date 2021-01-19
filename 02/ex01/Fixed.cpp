/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 11:24:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <math.h>

int		Fixed::getRawBits(void) const
{
	return (fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

int		Fixed::getFractionalBits(void) const
{
	return (fractional_bits);
}

int		Fixed::toInt(void) const
{
	return (fixed_point_value >> fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return (float)fixed_point_value / pow(2, fractional_bits);
}

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = (int)round((f * pow(2, fractional_bits)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& 	Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = other.fixed_point_value;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}