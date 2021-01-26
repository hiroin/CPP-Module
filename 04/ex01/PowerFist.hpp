/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:32:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_HPP
# define PowerFist_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist& other);
	PowerFist& 	operator=(const PowerFist& other);

public:
	void attack() const;

protected:

private:
};

std::ostream&	operator<<(std::ostream& os, const PowerFist& PowerFist);

#endif