/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 07:02:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(std::string const & name, int apcost, int damage);
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& PlasmaRifle);
	PlasmaRifle& 	operator = (const PlasmaRifle& PlasmaRifle);
	void attack() const;
	PlasmaRifle();
protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const PlasmaRifle& PlasmaRifle);

#endif