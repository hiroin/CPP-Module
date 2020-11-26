/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:33 by user42            #+#    #+#             */
/*   Updated: 2020/11/25 03:19:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

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