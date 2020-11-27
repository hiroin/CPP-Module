/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:37:19 by user42            #+#    #+#             */
/*   Updated: 2020/11/27 11:38:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>
#include <iostream>
#include <random>

ZombieHorde::ZombieHorde(int n)
{
	int	i;

	obj_zomibes = new Zombie[n];
	i = 0;
	while (i < n)
	{
		obj_zomibes[i].set_name(ZombieHorde::randomChump());
		i++;
	}
	number_of_zombies = n;
}

ZombieHorde::~ZombieHorde()
{
	delete [] obj_zomibes;
}

void ZombieHorde::announce()
{
	int	i;

	i = 0;
	while (i < number_of_zombies)
	{
		obj_zomibes[i].announce();
		i++;
	}
}

std::string	ZombieHorde::randomChump()
{
	std::string s = "No.";

	std::random_device seed_gen;
	std::default_random_engine engine(seed_gen());
	std::uniform_int_distribution<int> distribution(0,999) ;
	s += std::to_string(distribution(engine));
	return (s);
}