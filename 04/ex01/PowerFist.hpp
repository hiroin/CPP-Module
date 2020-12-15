/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/14 07:04:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_HPP
# define PowerFist_HPP

# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(std::string const & name, int apcost, int damage);
	virtual ~PowerFist();
	PowerFist(const PowerFist& PowerFist);
	PowerFist& 	operator = (const PowerFist& PowerFist);
	void attack() const;
	PowerFist();
protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const PowerFist& PowerFist);

#endif