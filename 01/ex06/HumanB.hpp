/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/18 02:25:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include <sstream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string& s);
	~HumanB();
	void			attack();
	void			setWeapon(Weapon& w);
private:
	std::string		name;
	Weapon*			weapon;
	//Weapon&			weapon;
};

#endif