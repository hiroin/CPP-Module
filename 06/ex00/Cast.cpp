/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/02/03 03:24:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

void	Cast::parseString()
{
	if (s_[0] == 0)
	{
		type_ = IMPOSSIBLE;
		return;
	}
	if (!isDigit(s_[0]) && s_[1] == 0)
	{
		type_ = CHAR;
		return;
	}
	if (isInt(s_))
	{
		type_ = INT;
		return;
	}
	if (isFloat(s_))
	{
		type_ = FLOAT;
		return;
	}
	if (isDouble(s_))
	{
		type_ = DOUBLE;
		return;
	}
	type_ = IMPOSSIBLE;
}

void	Cast::stoX()
{
	if (s_ == "nan")
		d_ = std::numeric_limits<double>::quiet_NaN();
	else if (s_ == "+inf")
		d_ = std::numeric_limits<double>::infinity();
	else if (s_ == "-inf")
		d_ = -std::numeric_limits<double>::infinity();
	else if (s_ == "nanf")
		f_ = std::numeric_limits<float>::quiet_NaN();
	else if (s_ == "+inff")
		f_ = std::numeric_limits<float>::infinity();
	else if (s_ == "-inff")
		f_ = -std::numeric_limits<float>::infinity();
	else if (type_ == CHAR)
		c_ = s_[0];
	else if (type_ == INT)
		i_ = std::stoi(s_);		
	else if (type_ == FLOAT)
		f_ = std::stof(s_);		
	else if (type_ == DOUBLE)
		d_ = std::stod(s_);		
}

void	Cast::convertToOtherTypes()
{
	if (type_ == CHAR)
	{
		i_ = static_cast<int>(c_);
		f_ = static_cast<float>(c_);
		d_ = static_cast<double>(c_);
	}
	else if (type_ == INT)
	{
		c_ = static_cast<char>(i_);
		f_ = static_cast<float>(i_);
		d_ = static_cast<double>(i_);

	}
	else if (type_ == FLOAT)
	{
		c_ = static_cast<char>(f_);
		i_ = static_cast<int>(f_);
		d_ = static_cast<double>(f_);

	}
	else if (type_ == DOUBLE)
	{
		c_ = static_cast<char>(d_);
		i_ = static_cast<int>(d_);
		f_ = static_cast<float>(d_);
	}
}

void	Cast::outputAllValue()
{
	outputCharValue();
	outputIntValue();
	outputFloatValue();
	outputDoubleValue();
}

void	Cast::outputCharValue()
{
	if (s_ == "nan" || s_ == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
	}	
	else if (d_ > std::numeric_limits<char>::max()
				|| std::numeric_limits<char>::min() > d_)
	{
		std::cout << "char : impossible" << std::endl;
	}
	else if (c_ >= ' ' && c_ <= '~')
	{
		std::cout << "char : '" << c_ << "'" << std::endl;
	}
	else
	{
		std::cout << "char : Non displayable" << std::endl;
	}
}

void	Cast::outputIntValue()
{
	if (s_ == "nan" || s_ == "nanf")
	{
		std::cout << "int : impossible" << std::endl;
	}	
	else if (std::numeric_limits<int>::max() >= d_
				&& d_ >= std::numeric_limits<int>::lowest())
	{
		std::cout << "int : " << i_ << std::endl;
	}
	else
	{
		std::cout << "int : impossible" << std::endl;
	}
}

void	Cast::outputFloatValue()
{
	if (std::isinf(f_))
	{
		std::cout << "float : " << f_ << "f" << std::endl;
	}
	else if (std::isnan(f_))
	{
		std::cout << "float : " << f_ << "f" << std::endl;
	}
	else if (std::numeric_limits<float>::max() >= f_
				&& f_ >= std::numeric_limits<float>::lowest())
	{
		std::cout << "float : " << f_;
		if (decimalPartIs0(s_) == true)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	else
	{
		std::cout << "float : impossible" << std::endl;
	}
}

void	Cast::outputDoubleValue()
{
	if (std::isinf(d_))
	{
		std::cout << "double : " << d_ << std::endl;
	}
	else if (std::isnan(d_))
	{
		std::cout << "double : " << d_ << std::endl;
	}
	else
	{
		std::cout << "double : " << d_;
		if (decimalPartIs0(s_) == true)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void 	Cast::outputAllImpossible()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
}

bool	Cast::isDigit(char c)
{
	if ('9' >= c && c >= '0')
		return true;
	return false;
}

//https://ja.cppreference.com/w/cpp/language/integer_literal
bool	Cast::isInt(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == '0' && s[i + 1]  == 0)
		return true;
	if (s[i] == '0' && s[i + 1]  != 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == 0)
		return true;
	return false;
}

//https://ja.cppreference.com/w/cpp/language/floating_literal
bool	Cast::isFloat(std::string s)
{
	if (s == "nanf" || s == "+inff" || s == "-inff")
		return true;
	if (isFloat1(s) || isFloat2(s) || isFloat3(s))
		return true;
	return false;
}

bool	Cast::isFloat1(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0 || s[i] == 'f' || s[i] == 'F')
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if ((s[i] == 'f' || s[i] == 'F') && s[i + 1] == 0)
		return true;
	return false;
}

bool	Cast::isFloat2(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
		i++;
	else
		return false;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0 || s[i] == 'f' || s[i] == 'F')
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if ((s[i] == 'f' || s[i] == 'F') && s[i + 1] == 0)
		return true;
	return false;
}

bool	Cast::isFloat3(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
		i++;
	else
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if ((s[i] == 'f' || s[i] == 'F') && s[i + 1] == 0)
		return true;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0 || s[i] == 'f' || s[i] == 'F')
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if ((s[i] == 'f' || s[i] == 'F') && s[i + 1] == 0)
		return true;
	return false;
}

bool	Cast::isDouble(std::string s)
{
	if (s == "nan" || s == "+inf" || s == "-inf")
		return true;	
	if (isDouble1(s) || isDouble2(s) || isDouble3(s))
		return true;
	return false;
}

bool	Cast::isDouble1(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0)
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == 0)
		return true;
	return false;
}

bool	Cast::isDouble2(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
		i++;
	else
		return false;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0)
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == 0)
		return true;
	return false;
}

bool	Cast::isDouble3(std::string s)
{
	int	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
		i++;
	else
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == 0)
		return true;
	if (s[i] != 'e' && s[i] != 'E')
		return false;
	i++;
	if (s[i] == 0)
		return false;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (s[i] == 0)
		return false;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == 0)
		return true;
	return false;
}

/*
true
42
42.
42.0
42.00

false
42.1
42.10
42.01
*/
bool	Cast::decimalPartIs0(std::string s)
{
	int	i = 0;

	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
	{
		i++;
		if (s[i] == 0)
			return (true);
		while (s[i])
		{
			if (s[i] == 'f' || s[i] == 'F')
				return (true);			
			if (s[i] != '0')
				return (false);
			i++;
		}
		return (true);
	}
	return (true);
}

Cast::Cast() {}

Cast::Cast(std::string s) : s_(s)
{
	parseString();
	if (type_ == IMPOSSIBLE)
	{
		outputAllImpossible();
		return;
	}
	try
	{
		stoX();
	}
	catch(const std::exception& e)
	{
		outputAllImpossible();
		return;
	}
	convertToOtherTypes();
	outputAllValue();
}

Cast::~Cast() {}

Cast::Cast(const Cast& other) :
	s_(other.s_),
	c_(other.c_),
	i_(other.i_),
	f_(other.f_),
	d_(other.d_)
{
}

Cast& 	Cast::operator=(const Cast& other)
{
	if (this != &other)
	{
		s_ = other.s_;
		c_ = other.c_;
		i_ = other.i_;
		f_ = other.f_;
		d_ = other.d_;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cast& cast)
{
	(void)cast;
	return os;
}
