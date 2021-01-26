/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/23 05:54:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <climits>
#include <cfloat>

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << std::endl;
	// a = Fixed( 8388607 );
	// std::cout << "8388607(23bit MAX) is " << a << std::endl;
	// std::cout << "8388607(23bit MAX) is " << a.toInt() << " as integer" << std::endl;
	// std::cout << std::endl;
	// a = Fixed( -8388608 );
	// std::cout << "-8388608(23bit MIN) is " << a << std::endl;
	// std::cout << "-8388608(23bit MIN) is " << a.toInt() << " as integer" << std::endl;
	// std::cout << std::endl;
	// a = Fixed( 8388608 );
	// std::cout << "8388608(23bit over) is " << a << std::endl;
	// std::cout << "8388608(23bit over) is " << a.toInt() << " as integer" << std::endl;
	// std::cout << std::endl;

	return 0;
}
