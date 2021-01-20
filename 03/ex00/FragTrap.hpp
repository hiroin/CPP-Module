/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/20 03:48:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <string>
# include <iostream>
# include <cmath>

class FragTrap
{
public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& 	operator=(const FragTrap& other);

public:
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
	void takeDamage(int amount);
	void beRepaired(int amount);
	void vaulthunter_dot_exe(std::string const & target);
	std::string	getName() const;
	int	getHitPoints() const;
	int	getEnergyPoints() const;
	int	getMaxEnergyPoints() const;	

private:
	FragTrap();

private:
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

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap);

#endif