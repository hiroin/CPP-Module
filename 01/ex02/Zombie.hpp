/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:27:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:07:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <string>
# include <iostream>
class Zombie
{
public:
	void	set_type(std::string s);
	void	set_name(std::string s);
	void 	announce();
private:
	std::string	type;
	std::string	name;
};

#endif