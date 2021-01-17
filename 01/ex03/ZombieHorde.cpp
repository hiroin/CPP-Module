/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:37:19 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:28:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int	i;

	obj_zomibes = new Zombie[n];
	i = 0;
	while (i < n)
	{
		obj_zomibes[i].set_type("Horde");
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
	int			num;
	static int	flag;
	
	if (flag == 0) {
		srand((unsigned int)time(NULL));
		flag = 1;
	}
	num = rand() % 1000;
	std::stringstream ss;
    ss << num;
    std::string num_str = ss.str();

	s += num_str;
	return (s);
}