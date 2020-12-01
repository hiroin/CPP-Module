/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:08:54 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 07:12:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>
#include <sstream>

const Brain&	Human::getBrain()
{
	return my_brain;
}

// const Brain*	Human::getBrain()
// {
// 	return &my_brain;
// }

std::string		Human::identify() const
{
	return my_brain.identify();
}
