/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/22 07:24:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(std::string name);
	virtual ~NinjaTrap();
	NinjaTrap(const NinjaTrap& other);
	NinjaTrap& 	operator=(const NinjaTrap& other);

public:
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	ninjaShoebox(const ClapTrap& Claptrap);
	void	ninjaShoebox(FragTrap& FragTrap);
	void	ninjaShoebox(const ScavTrap& ScavTrap);
	void	ninjaShoebox(const NinjaTrap& NinjaTrap);

protected:
	NinjaTrap();
};

std::ostream&	operator<<(std::ostream& os, const NinjaTrap& NinjaTrap);

#endif