/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/15 02:17:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& Enemy);
	Enemy& 	operator = (const Enemy& Enemy);
	std::string virtual getType() const;
	int getHP() const;
	virtual void takeDamage(int);
protected:
	Enemy();
	std::string	type_;
	int			hp_;
private:
};

std::ostream&	operator<<(std::ostream& os, const Enemy& Enemy);

#endif