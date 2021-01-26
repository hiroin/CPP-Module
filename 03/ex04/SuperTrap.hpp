/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:23:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name);
	virtual ~SuperTrap();
	SuperTrap(const SuperTrap& other);
	SuperTrap& 	operator=(const SuperTrap& other);

public:
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

private:
	SuperTrap();
};

std::ostream&	operator<<(std::ostream& os, const SuperTrap& SuperTrap);

#endif