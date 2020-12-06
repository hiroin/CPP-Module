/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/06 06:51:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& 	operator = (const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					fixed_point_value;
	const static int	fractional_bits;
};

#endif