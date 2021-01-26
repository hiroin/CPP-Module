/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:00:07 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 04:35:19 by user42           ###   ########.fr       */
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
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		getFractionalBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;

private:
	int					fixed_point_value;
	const static int	fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif