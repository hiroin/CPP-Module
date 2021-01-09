/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/09 04:10:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename TYPE>
void swap(TYPE& a, TYPE& b)
{
	TYPE tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename TYPE>
TYPE& min(TYPE& a, TYPE& b)
{
	return (a < b) ? a : b;
}

template <typename TYPE>
TYPE& max(TYPE& a, TYPE& b)
{
	return (a > b) ? a : b;
}

#endif
