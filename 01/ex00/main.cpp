/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:42:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 06:57:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address *.cpp
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address,leak *.cpp
*/
#include <string>
#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStac()
{
	Pony	obj;

	obj.set_weight(100);
	std::cout << obj.get_weight() << "kg" << std::endl;	
	obj.bark();
}

void	ponyOnTheHeap()
{
	Pony	*obj;

	try
	{
		obj = new Pony();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return;
	}	
	obj->set_weight(100);
	std::cout << obj->get_weight() << "kg" << std::endl;	
	obj->bark();
	delete obj;
}


int main()
{
	std::cout << "ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "ponyOnTheHeap()" << std::endl;
	ponyOnTheStac();
	return (0);
}
