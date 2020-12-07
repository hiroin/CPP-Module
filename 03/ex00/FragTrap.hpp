/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 08:54:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& fragtrap);
	FragTrap& 	operator = (const FragTrap& fragtrap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
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

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap);

#endif