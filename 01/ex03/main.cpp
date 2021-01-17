/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:24:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>

int main(void)
{
	ZombieHorde	*obj_heap;

	obj_heap = new ZombieHorde(10);
	obj_heap->announce();
	delete obj_heap;
	std::cout << std::endl;

	ZombieHorde	obj_stack(10);
	obj_stack.announce();

	return (0);
}
