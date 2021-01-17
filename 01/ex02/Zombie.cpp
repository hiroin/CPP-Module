/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:06:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 		Zombie::set_type(std::string s)
{
	type = s;
}

void 		Zombie::set_name(std::string s)
{
	name = s;
}

void		Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")" << "> Braiiiiiiinnnssss..." << std::endl;
}