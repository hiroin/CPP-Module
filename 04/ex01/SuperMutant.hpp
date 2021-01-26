/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:32:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant& other);
	SuperMutant&	operator=(const SuperMutant& other);

public:
	void takeDamage(int);

protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const SuperMutant& SuperMutant);

#endif