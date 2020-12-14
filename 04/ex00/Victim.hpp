/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 06:07:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>

class Victim
{
public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(const Victim& Victim);
	Victim& 	operator = (const Victim& Victim);
	std::string	getName() const;
	void getPolymorphed() const;
protected:
	std::string	name_;
	Victim();
private:
};

std::ostream&	operator<<(std::ostream& os, const Victim& Victim);

#endif