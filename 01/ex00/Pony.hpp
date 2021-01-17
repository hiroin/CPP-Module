/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:27:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/17 08:06:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
public:
	void	set_weight(int num);
	int		get_weight();
	void	bark();
private:
	int		weight;
};

#endif