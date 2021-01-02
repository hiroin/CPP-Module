/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 04:49:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* 	ZombieEvent::newZombie(std::string name)
{
	Zombie	*obj;

	try
	{
		obj = new Zombie();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}	
	obj->set_name(name);
	obj->set_type(type);
	return (obj);
}

void		ZombieEvent::setZombieType(std::string s)
{
	type = s;
}

std::string	ZombieEvent::randomChump()
{
	std::string str[5] = {"No.000","No.001","No.002","No.003","No.004"};

	srand((unsigned int)time(NULL));
	std::cout << rand() << std::endl;
	return str[rand() % 5];
}