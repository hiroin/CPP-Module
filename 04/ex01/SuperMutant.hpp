/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:45:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant& SuperMutant);
	SuperMutant& 	operator = (const SuperMutant& SuperMutant);
	void takeDamage(int);
protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const SuperMutant& SuperMutant);

#endif