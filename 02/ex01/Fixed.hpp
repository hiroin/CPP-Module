/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2020/12/07 03:42:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& 	operator = (const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		getFractionalBits(void) const;
	int		toInt(void) const;
	float	ft_pow2(int deg) const;
	int		ft_abs(int num) const;
private:
	int					fixed_point_value;
	const static int	fractional_bits = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& f);

#endif