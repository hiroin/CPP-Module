/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 14:25:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine();
	TacticalMarine* bob2 = new TacticalMarine();

	std::cout << bob << std::endl;
	std::cout << *bob2 << std::endl;

	delete bob;
	delete bob2;

	return 0;
}
