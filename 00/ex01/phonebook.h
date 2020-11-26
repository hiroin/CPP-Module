/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:42 by user42            #+#    #+#             */
/*   Updated: 2020/11/25 03:18:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>

class CPhoneBook
{
public:
	void		set_pagenum(int num);
	void		set_firstname(std::string s);
	void		set_lastname(std::string s);
	void		set_nickname(std::string s);
	void		set_login(std::string s);
	void		set_postaladdress(std::string s);
	void		set_emailaddress(std::string s);
	void		set_phonenumber(std::string s);
	void		set_birthdaydate(std::string s);
	void		set_favoritemeal(std::string s);
	void		set_underwearcolor(std::string s);
	void		set_darkestsecret(std::string s);
	int			get_pagenum();
	std::string get_firstname();
private:
	int			pagenum;
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	postaladdress;
	std::string	emailaddress;
	std::string	phonenumber;
	std::string	birthdaydate;
	std::string	favoritemeal;
	std::string	underwearcolor;
	std::string	darkestsecret;
};

#endif