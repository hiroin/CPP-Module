/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 06:36:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include <string>

void 		CPhoneBook::set_pagenum(int num)
{
	pagenum = num;
}

void		CPhoneBook::set_firstname(std::string s)
{
	firstname = s;
}

int			CPhoneBook::get_pagenum()
{
	return pagenum;
}

std::string	CPhoneBook::get_firstname()
{
	return firstname;
}