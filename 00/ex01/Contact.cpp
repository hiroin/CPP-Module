/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 12:57:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

void		Contact::set_firstname(std::string s)
{
	firstname = s;
}

void		Contact::set_lastname(std::string s)
{
	lastname = s;
}
void		Contact::set_nickname(std::string s)
{
	nickname = s;
}
void		Contact::set_login(std::string s)
{
	login = s;
}
void		Contact::set_postaladdress(std::string s)
{
	postaladdress = s;
}
void		Contact::set_emailaddress(std::string s)
{
	emailaddress = s;
}
void		Contact::set_phonenumber(std::string s)
{
	phonenumber = s;
}
void		Contact::set_birthdaydate(std::string s)
{
	birthdaydate = s;
}
void		Contact::set_favoritemeal(std::string s)
{
	favoritemeal = s;
}
void		Contact::set_underwearcolor(std::string s)
{
	underwearcolor = s;
}
void		Contact::set_darkestsecret(std::string s)
{
	darkestsecret = s;
}

std::string	Contact::get_firstname()
{
	return firstname;
}
std::string	Contact::get_lastname()
{
	return lastname;
}
std::string	Contact::get_nickname()
{
	return nickname;
}
std::string	Contact::get_login()
{
	return login;
}
std::string	Contact::get_postaladdress()
{
	return postaladdress;
}
std::string	Contact::get_emailaddress()
{
	return emailaddress;
}
std::string	Contact::get_phonenumber()
{
	return phonenumber;
}
std::string	Contact::get_birthdaydate()
{
	return birthdaydate;
}
std::string	Contact::get_favoritemeal()
{
	return favoritemeal;
}
std::string	Contact::get_underwearcolor()
{
	return underwearcolor;
}
std::string	Contact::get_darkestsecret()
{
	return darkestsecret;
}
