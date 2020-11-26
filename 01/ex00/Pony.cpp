/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 06:41:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

void 		CPony::set_weight(uint8_t num)
{
	weight = num;
}

uint8_t		CPony::get_weight()
{
	return (weight);
}

void		CPony::bark()
{
	std::cout << "neigh neigh" << std::endl;
}