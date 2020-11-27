/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2020/11/27 12:13:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	char	s[17] = "HI THIS IS BRAIN";
	char	*p = s;
	char&	r = *s;

	std::cout << "pointer" << std::endl;
	std::cout << p << std::endl;
	std::cout << "reference" << std::endl;
	std::cout << &r << std::endl;

	std::string	string = "HI THIS IS BRAIN";
	std::string	*pstring = &string;
	std::string& rstring = string;

	std::cout << "pointer" << std::endl;
	std::cout << *pstring << std::endl;
	std::cout << "reference" << std::endl;
	std::cout << rstring << std::endl;

	return (0);
}
