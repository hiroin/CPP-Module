/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 05:53:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(const Victim& other);
	Victim&	operator=(const Victim& other);

public:
	std::string	getName() const;
	void getPolymorphed() const;

protected:
	std::string	name_;
	Victim();

private:
};

std::ostream&	operator<<(std::ostream& os, const Victim& Victim);

#endif