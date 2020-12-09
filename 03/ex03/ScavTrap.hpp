/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 03:39:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCABTRAP_HPP
# define SCABTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(
		  const int &hit_points
		, const int &max_hit_points
		, const int &energy_points
		, const int &max_energy_points
		, const int &level
		, const std::string &name
		, const int &melee_attack_damage
		, const int &ranged_attack_damage
		, const int &armor_damage_reduction
	);	
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap& ScavTrap);
	ScavTrap& 	operator = (const ScavTrap& ScavTrap);
	void challengeNewcomer(void);
};

std::ostream&	operator<<(std::ostream& os, const ScavTrap& ScavTrap);

#endif