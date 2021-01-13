/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 14:41:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int easyfind(const std::vector<int> &v, int val)
// {
// 	std::vector<int>::const_iterator i = std::find(v.begin(), v.end(), val);
// 	if(i != v.end())
// 	{
// 		return (*i);
// 	}
// 	throw std::runtime_error("val not found");
// }

int		main()
{
	int	data[] = {0,1,2,3,4,5,6,7,8,9};
	std::vector<int> array(data, data + 10);
	std::cout << easyfind(array, 1) << std::endl;
	try
	{
		std::cout << easyfind(array, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}