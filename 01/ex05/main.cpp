/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:15:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 07:12:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <string>
#include <iostream>

int main(void)
{
	//Brain	obj_brain;
	Human	bob;

	//std::cout << obj_brain.identify() << std::endl;
	std::cout << &bob << std::endl;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	//std::cout << bob.getBrain()->identify() << std::endl;
	return (0);
}