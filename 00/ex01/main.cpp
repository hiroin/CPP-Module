/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:36:48 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 02:11:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "phonebook.h"

std::string	get_string_for_index(std::string s)
{
	std::string rs;
	
	rs = s;
	if (s.size() > 10)
		rs = s.substr(0,9) + ".";
	return (rs);
}

void	search_phonebook(CPhoneBook *obj)
{
	int	index;

	std::cout << "index     |first name|last name |nickname  " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << obj[0].get_pagenum() << "|";
	std::cout << std::setw(10) << std::right << get_string_for_index(obj[0].get_firstname()) << "|";
	std::cout << std::endl << std::endl;
	while (1)
	{
		std::cout << "SELECT index : ";
		std::cin >> index;
		if (std::cin.fail() || !(index >= 0 && index <= 7))
		{
			std::cout << "Bad index. The index is 0 to 7." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			std::cout << "index     : " << obj[index].get_pagenum() << std::endl;
			std::cout << "firstname : " << obj[index].get_firstname() << std::endl;
			break;
		}
	}
}

void	add_phonebook(CPhoneBook *obj)
{
	std::string	s;

	std::cout << "firstname : ";
	std::cin >> s;
	obj->set_firstname(s);
}

void	init_phonebook(CPhoneBook *obj)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		obj[i].set_pagenum(i);
		obj[i].set_firstname("");
		i++;
	}
}

int main()
{
	CPhoneBook	obj[8];
	std::string	command;
	int 		i;

	init_phonebook(obj);
	i = 0;
	while (1)
	{
		std::cout << "COMMAND[ADD / SEARCH / EXIT] : ";
		std::cin >> command;
		if (std::cin.fail())
			std::cin.clear();
		else if (command == "EXIT")
			break;
		else if (command == "SEARCH")
			search_phonebook(obj);
		else if (command == "ADD" && i == 8)
			std::cout << "The phone book is full." << std::endl;
		else if (command == "ADD" && i < 8)
			add_phonebook(&obj[i++]);
		
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	//std::cin >> num;
	std::cout << obj[0].get_pagenum() << std::endl;
	std::cout << obj[0].get_firstname() << std::endl;
	std::cout << obj[1].get_pagenum() << std::endl;
	std::cout << obj[1].get_firstname() << std::endl;
	return (0);
}