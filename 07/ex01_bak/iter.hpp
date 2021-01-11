/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 13:45:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename TYPE> class iter
{
public:
	iter(TYPE *array, size_t size, void (*func)(TYPE&))
	{
		std::cout << "iter Default constructor called" << std::endl;
		size_t		i;

		i = 0;
		while (i < size)
		{
			func(array[i]);
			i++;
		}
	}

	iter(TYPE *array, size_t size, void (*func)(const TYPE&))
	{
		std::cout << "iter Default constructor called" << std::endl;
		size_t		i;

		i = 0;
		while (i < size)
		{
			func(array[i]);
			i++;
		}
	}

	~iter()
	{
		std::cout << "iter Destructor called" << std::endl;
	}
private:
};

typedef iter<int> iteri;

#endif
