/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/12 02:23:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_HPP
# define OPERATION_HPP

# include <iostream>
# include <string>

class Array
{
public:
	bool	setValue(int v, size_t size);
	size_t	getSize() const;
	int&	operator[](size_t const i) const;
	Array();
	Array(unsigned int n);
	virtual ~Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
private:
	int		*array_;
	size_t	size_;
};

std::ostream&	operator<<(std::ostream& os, const Array& operation);

#endif
