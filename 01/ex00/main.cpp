/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:42:06 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 07:10:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "Pony.hpp"

void	ponyOnTheStac()
{
	CPony		obj;

	obj.set_weight(100);
	std::cout << std::to_string(obj.get_weight()) << "kg" << std::endl;	
	obj.bark();
}

void	ponyOnTheHeap()
{
	CPony		*obj = 0;

	try
	{
		obj = new CPony();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return;
	}	
	obj->set_weight(100);
	std::cout << std::to_string(obj->get_weight()) << "kg" << std::endl;	
	obj->bark();
	delete obj;
}


int main()
{
	std::cout << "ponyOnTheStac()" << std::endl;
	ponyOnTheStac();
	std::cout << "ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();
	return (0);
}
