/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prince.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 06:12:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINCE_HPP
# define PRINCE_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
class Prince : public Victim
{
public:
	Prince(std::string name);
	virtual ~Prince();
	Prince(const Prince& other);
	Prince&	operator=(const Prince& other);

public:
	void getPolymorphed() const;

private:
	Prince();
};

std::ostream&	operator<<(std::ostream& os, const Prince& Prince);

#endif