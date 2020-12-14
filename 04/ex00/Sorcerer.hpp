/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 05:54:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>

class Victim;
class Peon;

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(const Sorcerer& Sorcerer);
	Sorcerer& 	operator = (const Sorcerer& Sorcerer);
	std::string	getName() const;
	std::string	getTitle() const;
	void polymorph(Victim const &) const;
	void polymorph(Peon const &) const;
protected:
	std::string	name_;
	std::string	title_;
private:
	Sorcerer();
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& Sorcerer);

#endif