/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:03:20 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 07:12:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <cstdint>
# include "Brain.hpp"

class Human
{
public:
	std::string		identify() const;
	const Brain&	getBrain();
	//const Brain*	getBrain();
private:
	const Brain	my_brain;
};

#endif