/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 06:32:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <string>
# include <iostream>
# include <cmath>

class ClapTrap
{
public:
	ClapTrap(
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
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& 	operator=(const ClapTrap& other);

public:
	void takeDamage(int amount);
	void beRepaired(int amount);
	std::string	getName() const;
	int	getHitPoints() const;
	int	getEnergyPoints() const;
	int	getMaxEnergyPoints() const;

protected:
	ClapTrap();
	int			hit_points_;
	int			max_hit_points_;
	int			energy_points_;
	int			max_energy_points_;
	int			level_;
	std::string	name_;
	int			melee_attack_damage_;
	int			ranged_attack_damage_;
	int			armor_damage_reduction_;

private:
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& ClapTrap);

#endif