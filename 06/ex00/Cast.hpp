/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/02/03 03:16:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cfloat>
# include <cmath>
# include <limits>
# include <cctype>

enum typeOfLiteral { CHAR, INT, FLOAT, DOUBLE, IMPOSSIBLE};
class Cast
{
public:
	Cast(std::string s);
	virtual ~Cast();
	Cast(const Cast& other);
	Cast&	operator=(const Cast& other);

private:
	void	parseString();
	void	stoX();
	void	convertToOtherTypes();
	void	outputAllValue();
	void	outputCharValue();
	void	outputIntValue();
	void	outputFloatValue();
	void	outputDoubleValue();
	void	outputAllImpossible();
	bool	isDigit(char c);
	bool	isInt(std::string s);
	bool	isFloat(std::string s);
	bool	isFloat1(std::string s);
	bool	isFloat2(std::string s);
	bool	isFloat3(std::string s);
	bool	isDouble(std::string s);
	bool	isDouble1(std::string s);
	bool	isDouble2(std::string s);
	bool	isDouble3(std::string s);
	bool	decimalPartIs0(std::string s);

private:
	Cast();
	std::string	s_;
	char		c_;
	int			i_;
	float		f_;
	double		d_;	
	enum typeOfLiteral	type_;
};

std::ostream&	operator<<(std::ostream& os, const Cast& cast);

#endif
