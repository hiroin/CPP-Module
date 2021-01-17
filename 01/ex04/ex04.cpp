/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:15:46 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:37:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	changePointer(int* i)
{
	*i = 0;	
}

void	change(int& i)
{
	i = 0;	
}

int main(void)
{
	int	i = 42;
	change(i);
	std::cout << i << std::endl;
	std::cout << std::endl;

	char	s[17] = "HI THIS IS BRAIN";
	char	*p = s;
	char&	r = *s;

	std::cout << "pointer" << std::endl;
	std::cout << p << std::endl;
	std::cout << "reference" << std::endl;
	std::cout << &r << std::endl;
	std::cout << std::endl;

	std::string	string = "HI THIS IS BRAIN";
	std::string	*pstring = &string;
	std::string& rstring = string;

	std::cout << "pointer" << std::endl;
	std::cout << *pstring << std::endl;
	std::cout << "reference" << std::endl;
	std::cout << rstring << std::endl;
	std::cout << std::endl;

	return (0);
}
