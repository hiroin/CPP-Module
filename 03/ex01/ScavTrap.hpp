/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/08 01:12:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCABTRAP_HPP
# define SCABTRAP_HPP

# include <string>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap& ScavTrap);
	ScavTrap& 	operator = (const ScavTrap& ScavTrap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
	std::string	getName() const;
private:
	int			hit_points_;
	int			max_hit_points_;
	int			energy_points_;
	int			level_;
	std::string	name_;
	int			melee_attack_damage_;
	int			ranged_attack_damage_;
	int			armor_damage_reduction_;
};

std::ostream&	operator<<(std::ostream& os, const ScavTrap& ScavTrap);

#endif