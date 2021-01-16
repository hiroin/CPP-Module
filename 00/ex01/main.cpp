/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:36:48 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 14:56:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Commands for compiling
clang++ main.cpp Contact.cpp
*/
#include <iostream>
#include <iomanip>
#include <limits>
#include "Contact.hpp"

std::string	get_string_for_index(std::string s)
{
	std::string rs;
	
	rs = s;
	if (s.size() > 10)
		rs = s.substr(0,9) + ".";
	return (rs);
}

void	search_phonebook(Contact *obj, int numberOfItems)
{
	int	index;
	int	i;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	i = 0;
	while (i < numberOfItems)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << get_string_for_index(obj[i].get_firstname()) << "|";
		std::cout << std::setw(10) << std::right << get_string_for_index(obj[i].get_lastname()) << "|";
		std::cout << std::setw(10) << std::right << get_string_for_index(obj[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	while (1)
	{
		std::cout << "SELECT index : ";
		std::cin >> index;
		if (std::cin.fail() || !(index >= 0 && index < numberOfItems))
		{
			std::cout << "Bad index. The index is 0 to " << numberOfItems - 1 << "." << std::endl;
			// Clear the error flag.
			std::cin.clear();
			// Discard characters in the stream.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			std::cout << "index           : " << index << std::endl;
			std::cout << "firs tname      : " << obj[index].get_firstname() << std::endl;
			std::cout << "last name       : " << obj[index].get_lastname() << std::endl;
			std::cout << "nickname        : " << obj[index].get_nickname() << std::endl;
			std::cout << "login           : " << obj[index].get_login() << std::endl;
			std::cout << "postal address  : " << obj[index].get_postaladdress() << std::endl;
			std::cout << "email address   : " << obj[index].get_emailaddress() << std::endl;
			std::cout << "phone number    : " << obj[index].get_phonenumber() << std::endl;
			std::cout << "birthday date   : " << obj[index].get_birthdaydate() << std::endl;
			std::cout << "favorite meal   : " << obj[index].get_favoritemeal() << std::endl;
			std::cout << "underwear color : " << obj[index].get_underwearcolor() << std::endl;
			std::cout << "darkest secret  : " << obj[index].get_darkestsecret() << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}
}

bool	acction_cin_fail()
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (false);
}

bool	add_phonebook(Contact *obj)
{
	std::string	s;

	std::cout << "first name : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_firstname(s);
	}
	std::cout << "last name : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_lastname(s);
	}
	std::cout << "nickname : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_nickname(s);
	}
	std::cout << "login : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_login(s);
	}
	std::cout << "postal address : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_postaladdress(s);
	}
	std::cout << "email address : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_emailaddress(s);
	}
	std::cout << "phone number : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_phonenumber(s);
	}
	std::cout << "birthday date : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_birthdaydate(s);
	}
	std::cout << "favorite meal : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_favoritemeal(s);
	}
	std::cout << "underwear color : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_underwearcolor(s);
	}
	std::cout << "darkest secret : " << std::flush;
	if (std::getline(std::cin, s))
	{
		if (std::cin.fail())
			return acction_cin_fail();
		obj->set_darkestsecret(s);
	}
	return (true);
}

int main()
{
	Contact		obj[8];
	std::string	command;
	int 		i;

	i = 0;
	while (1)
	{
		std::cout << "COMMAND[ADD / SEARCH / EXIT] : " << std::flush;
		//std::cin >> command;
		std::getline(std::cin, command);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (command == "EXIT")
			break;
		else if (command == "SEARCH")
			search_phonebook(obj, i);
		else if (command == "ADD" && i == 8)
			std::cout << "The phone book is full." << std::endl;
		else if (command == "ADD" && i < 8)
		{
			if (add_phonebook(&obj[i]))
				i++;
		}
	}
	return (0);
}