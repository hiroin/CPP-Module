/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/12 12:52:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main()
{
	try
	{
		Array <int> a;
		std::cout << "size of a    : " << a.getSize() << std::endl;
		Array <int> an0(0);
		std::cout << "size of an0  : " << an0.getSize() << std::endl;
		Array <int> an10(10);
		std::cout << "size of an10 : " << an10.getSize() << std::endl;
		Array <int> an20(20);

		an10.setValue(1, 0);
		std::cout << "an10[0] : " << an10[0] << std::endl;
		an10.setValue(-1, 0);
		std::cout << "an10[0] : " << an10[0] << std::endl;
		// an10.setValue(1, 10);
		// an10.setValue(1, -1);
		an20.setValue(2, 0);
		std::cout << "an20[0] : " << an20[0] << std::endl;

		Array <int> aCopy(an10);
		std::cout << "an10[0]  : " << an10[0] << std::endl;
		std::cout << "aCopy[0] : " << an10[0] << std::endl;

		aCopy = an20;
		std::cout << "an20[0]  : " << an20[0] << std::endl;
		std::cout << "aCopy[0] : " << aCopy[0] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	try
	{
		Array <int> anm1(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}