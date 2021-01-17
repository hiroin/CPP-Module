/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 07:57:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <iostream>

int main(void)
{
	Zombie		zombie_obj1;

	zombie_obj1.set_name("Bob");
	zombie_obj1.set_type("human");
	zombie_obj1.announce();
	std::cout << std::endl;


	Zombie		*zombie_obj2;
	Zombie		*zombie_obj3;
	ZombieEvent zombie_event_obj;

	zombie_event_obj.setZombieType("human");
	zombie_obj2 = zombie_event_obj.newZombie("Alice");
	zombie_obj2->announce();
	delete zombie_obj2;
	std::cout << std::endl;

	zombie_event_obj.setZombieType("heap");
	zombie_obj2 = zombie_event_obj.randomChump();
	zombie_obj2->announce();
	delete zombie_obj2;
	zombie_event_obj.setZombieType("heap");
	zombie_obj3 = zombie_event_obj.randomChump();
	zombie_obj3->announce();
	delete zombie_obj3;
	std::cout << std::endl;


	ZombieEvent	zombie_obj_stack;
	Zombie		zombie_obj10;
	Zombie		zombie_obj11;
	Zombie		zombie_obj12;

	zombie_obj_stack.setZombieType("stack");
	zombie_obj10 = zombie_obj_stack.randomChumpStack();
	zombie_obj10.announce();
	zombie_obj11 = zombie_obj_stack.randomChumpStack();
	zombie_obj11.announce();
	zombie_obj12 = zombie_obj_stack.randomChumpStack();
	zombie_obj12.announce();

	return (0);
}
