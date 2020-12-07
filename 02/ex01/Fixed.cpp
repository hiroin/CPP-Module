/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 03:43:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

float	Fixed::ft_pow2(int deg) const
{
	int				i;
	unsigned int	r;

	if (deg == 0)
	{
		return (1);
	}
	i = 0;
	r = 1;
	while (i < deg)
	{
		r *= 2;
		i++;
	}
	return (r);
}

int		Fixed::ft_abs(int num) const
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

int		Fixed::getFractionalBits(void) const
{
	return (fractional_bits);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	//setRawBits(fixed.getRawBits());
	*this = fixed;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	//fixed_point_value = (int)std::roundf((f * std::pow(2, fractional_bits)));
	fixed_point_value = (int)std::roundf((f * ft_pow2(fractional_bits)));
	if (f < 0)
	{
		//fixed_point_value = std::abs(fixed_point_value);
		fixed_point_value = ft_abs(fixed_point_value);
		fixed_point_value = ~fixed_point_value;
		fixed_point_value += 1;
	}
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& 	Fixed::operator = (const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(fixed.getRawBits());
	return (*this);
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> fractional_bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	int		c;
	float	f;
	int		sign = 1;

	c = fixed.ft_abs(fixed.getRawBits());
	if (fixed.getRawBits() < 0)
	{
		c = fixed.getRawBits() - 1;
		c = ~c;
		sign = -1;
	}
	//f = (float)c / std::pow(2, fixed.getFractionalBits());
	f = (float)c / fixed.ft_pow2(fixed.getFractionalBits());
	f = f * sign;
	os << f;
    return os;
}