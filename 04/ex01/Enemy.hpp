/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/26 08:32:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& other);
	Enemy& 	operator=(const Enemy& other);

public:
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