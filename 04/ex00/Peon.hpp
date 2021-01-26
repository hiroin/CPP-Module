/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 05:44:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
class Peon : public Victim
{
public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(const Peon& other);
	Peon& 	operator=(const Peon& other);

public:
	void getPolymorphed() const;

private:
	Peon();
};

std::ostream&	operator<<(std::ostream& os, const Peon& Peon);

#endif