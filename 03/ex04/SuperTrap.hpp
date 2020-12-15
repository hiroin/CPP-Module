/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/13 09:46:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include "SuperTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	virtual ~SuperTrap();
	SuperTrap(const SuperTrap& SuperTrap);
	SuperTrap& 	operator = (const SuperTrap& SuperTrap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

std::ostream&	operator<<(std::ostream& os, const SuperTrap& SuperTrap);

#endif