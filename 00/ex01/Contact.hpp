/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:33:42 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 12:56:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
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
	std::string get_firstname();
	std::string	get_lastname();
	std::string	get_nickname();
	std::string	get_login();
	std::string	get_postaladdress();
	std::string	get_emailaddress();
	std::string	get_phonenumber();
	std::string	get_birthdaydate();
	std::string	get_favoritemeal();
	std::string	get_underwearcolor();
	std::string	get_darkestsecret();
private:
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