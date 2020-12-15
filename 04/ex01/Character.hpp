/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:47:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

class AWeapon;
class Enemy;

class Character
{
public:
	Character(std::string const & name);
	virtual ~Character();
	Character(const Character& Character);
	Character& 	operator = (const Character& Character);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string	virtual getName() const;
	int	getAp() const;
	std::string	getWeaponName() const;
private:
	Character();
	std::string	name_;
	int			ap_ = 40;
	AWeapon		*aweapon_ = NULL;
};

std::ostream&	operator<<(std::ostream& os, const Character& Character);

#endif