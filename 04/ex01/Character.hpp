/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 11:17:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class AWeapon;
class Enemy;

class Character
{
public:
	Character(std::string const & name);
	virtual ~Character();
	Character(const Character& other);
	Character& 	operator = (const Character& other);

public:
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string	const & getName() const;
	int	getAp() const;
	std::string	getWeaponName() const;

private:
	Character();
	std::string	name_;
	int			ap_;
	AWeapon		*aweapon_;
};

std::ostream&	operator<<(std::ostream& os, const Character& Character);

#endif