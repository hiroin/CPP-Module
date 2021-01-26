/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 10:55:28 by user42           ###   ########.fr       */
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
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion& other);
	RadScorpion&	operator=(const RadScorpion& other);

protected:

private:
};

std::ostream&	operator<<(std::ostream& os, const RadScorpion& RadScorpion);

#endif