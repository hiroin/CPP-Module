/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 07:07:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual	~AWeapon();
	AWeapon(const AWeapon& other);
	AWeapon&	operator=(const AWeapon& other);

public:
	std::string	virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

protected:
	AWeapon();
	std::string	name_;
	int			apcost_;
	int			damage_;

private:
};

std::ostream&	operator<<(std::ostream& os, const AWeapon& AWeapon);

#endif