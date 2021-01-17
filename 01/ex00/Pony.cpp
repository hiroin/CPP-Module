/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 06:51:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

void 	Pony::set_weight(int num)
{
	weight = num;
}

int		Pony::get_weight()
{
	return (weight);
}

void	Pony::bark()
{
	std::cout << "neigh neigh" << std::endl;
}