/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 06:16:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Prince.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(const Sorcerer& other);
	Sorcerer& 	operator=(const Sorcerer& other);

public:
	std::string	getName() const;
	std::string	getTitle() const;
	void polymorph(Victim const & victim) const;
	void polymorph(Peon const & peon) const;
	void polymorph(Prince const & prince) const;

protected:
	std::string	name_;
	std::string	title_;

private:
	Sorcerer();
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& Sorcerer);

#endif