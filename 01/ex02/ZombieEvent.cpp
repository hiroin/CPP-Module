/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:07:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

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

Zombie*		ZombieEvent::randomChump()
{
	Zombie		*obj;
	std::string str[5] = {"No.000","No.001","No.002","No.003","No.004"};
	std::string name;
	static int	i = 0;

	if (i == 0)
	{
		srand((unsigned int)time(NULL));
		i = 1;
	}
	try
	{
		obj = new Zombie();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	name = str[rand() % 5];
	obj->set_name(name);
	obj->set_type(type);
	std::cout << name << " born." << std::endl;
	return (obj);
}

Zombie		ZombieEvent::randomChumpStack()
{
	Zombie		obj;
	std::string str[5] = {"No.000","No.001","No.002","No.003","No.004"};
	std::string name;
	static int	i = 0;

	if (i == 0)
	{
		srand((unsigned int)time(NULL));
		i = 1;
	}
	name = str[rand() % 5];
	obj.set_name(name);
	obj.set_type(type);
	std::cout << name << " born." << std::endl;
	return (obj);
}