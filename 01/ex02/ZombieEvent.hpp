/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:19:45 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:07:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>
# include <string>
# include <iostream>
# include <stdlib.h>
class ZombieEvent
{
public:
	Zombie* 	newZombie(std::string name);
	void		setZombieType(std::string type);
	Zombie*		randomChump();
	Zombie		randomChumpStack();
private:
	std::string	type;
};

#endif