/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:18:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string &name);
	virtual ~FragTrap();
	FragTrap(const FragTrap& fragtrap);
	FragTrap&	operator=(const FragTrap& fragtrap);

public:
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
	void vaulthunter_dot_exe(std::string const & target);

private:
	FragTrap();
};

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap);

#endif