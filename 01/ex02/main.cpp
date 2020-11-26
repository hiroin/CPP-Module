/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 09:55:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>

int main(void)
{
	Zombie		zombie_obj1;
	Zombie		*zombie_obj2;
	ZombieEvent zombie_event_obj;

	zombie_obj1.set_name("Bob");
	zombie_obj1.set_type("human");
	zombie_obj1.announce();

	zombie_event_obj.setZombieType("human");
	zombie_obj2 = zombie_event_obj.newZombie("Alice");
	zombie_obj2->announce();
	delete zombie_obj2;

	zombie_event_obj.setZombieType("dog");
	zombie_obj2 = zombie_event_obj.newZombie(zombie_event_obj.randomChump());
	zombie_obj2->announce();
	delete zombie_obj2;

	return (0);
}
