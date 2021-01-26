/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:32:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <string>
# include <iostream>

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& other);
	PlasmaRifle&	operator = (const PlasmaRifle& other);

public:
	void attack() const;

protected:

private:
};

std::ostream&	operator<<(std::ostream& os, const PlasmaRifle& PlasmaRifle);

#endif