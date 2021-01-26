/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/09 09:24:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
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
	ClapTrap(const ClapTrap& ClapTrap);
	ClapTrap& 	operator = (const ClapTrap& ClapTrap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	getName() const;
protected:
	int			hit_points_;
	int			max_hit_points_;
	int			energy_points_;
	int			max_energy_points_;
	int			level_;
	std::string	name_;
	int			melee_attack_damage_;
	int			ranged_attack_damage_;
	int			armor_damage_reduction_;
};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& ClapTrap);

#endif