/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 02:32:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
private:
	int					fixed_point_value;
	const static int	fractional_bits;
};

#endif