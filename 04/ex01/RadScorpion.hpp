/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:45:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_HPP
# define RadScorpion_HPP

# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(int hp, std::string const & type);
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion& RadScorpion);
	RadScorpion& 	operator = (const RadScorpion& RadScorpion);
protected:
private:
};

std::ostream&	operator<<(std::ostream& os, const RadScorpion& RadScorpion);

#endif