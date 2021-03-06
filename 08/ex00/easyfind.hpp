/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 14:44:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <typeinfo>

template <typename T>
int easyfind(const T &v, int val)
{
	//std::vector<int>::const_iterator i = std::find(v.begin(), v.end(), val);
	typename T::const_iterator i = std::find(v.begin(), v.end(), val);
	if(i != v.end())
	{
		return (*i);
	}
	throw std::runtime_error("val not found");
}

#endif
