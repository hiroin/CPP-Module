/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2020/11/27 11:38:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>

int main(void)
{
	ZombieHorde	*obj;

	obj = new ZombieHorde(2);
	obj->announce();
	delete obj;
	return (0);
}
