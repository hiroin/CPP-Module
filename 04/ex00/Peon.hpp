/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 06:05:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(const Peon& Peon);
	Peon& 	operator = (const Peon& Peon);
	void getPolymorphed() const;
private:
	Peon();
};

std::ostream&	operator<<(std::ostream& os, const Peon& Peon);

#endif