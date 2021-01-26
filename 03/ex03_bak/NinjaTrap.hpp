/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/09 08:18:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	virtual ~NinjaTrap();
	NinjaTrap(const NinjaTrap& NinjaTrap);
	NinjaTrap& 	operator = (const NinjaTrap& NinjaTrap);
	void		ninjaShoebox(ClapTrap& Claptrap);
	void		ninjaShoebox(FragTrap& FragTrap);
	void		ninjaShoebox(ScavTrap& ScavTrap);
	void		ninjaShoebox(NinjaTrap& NinjaTrap);
};

std::ostream&	operator<<(std::ostream& os, const NinjaTrap& NinjaTrap);

#endif