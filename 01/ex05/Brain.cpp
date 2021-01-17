/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:55:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::stringstream ss;

	std::cout << "Brain::identify is called" << std::endl;
	ss << static_cast<const void *>(this);
	return ss.str();
}

Brain::Brain()
{
	std::cout << "Brain::Constractor is called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain::Destractor is called" << std::endl;
}