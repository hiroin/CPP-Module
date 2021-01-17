/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:37:02 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:19:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORUDE_HPP
# define ZOMBIEHORUDE_HPP

# include <string>
# include <stdlib.h>
# include <string>
# include <iostream>
# include <sstream>

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void 		announce();
private:
	Zombie		*obj_zomibes;
	int			number_of_zombies;
	std::string	randomChump();
};

#endif