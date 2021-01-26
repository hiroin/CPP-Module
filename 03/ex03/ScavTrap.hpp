/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:17:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCABTRAP_HPP
# define SCABTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cmath>
class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &name);	
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap& ScavTrap);
	ScavTrap&	operator=(const ScavTrap& ScavTrap);

public:
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
	void challengeNewcomer(void) const;

private:
	ScavTrap();

};

std::ostream&	operator<<(std::ostream& os, const ScavTrap& ScavTrap);

#endif