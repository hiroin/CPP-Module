/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:19:45 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 09:39:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <cstdint>
# include "Zombie.hpp"

class ZombieEvent
{
public:
	Zombie* 	newZombie(std::string name);
	void		setZombieType(std::string type);
	std::string	randomChump();
private:
	std::string	type;
};

#endif