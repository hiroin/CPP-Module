/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 10:23:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

bool	decimalPartIs0(char *arg)
{
	int		i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (arg[i] == '.')
	{
		i++;
		if (arg[i] == 0)
			return (true);
		while (arg[i])
		{
			if (arg[i] >= '1' && arg[i] <= '9')
				return (false);
			i++;
		}
		return (true);
	}
	return (true);
}

bool	inputIsFloat(char *arg)
{
	int		i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (arg[i] == 'f')
		return (true);
	if (arg[i] == '.')
	{
		i++;
		if (arg[i] == 'f')
			return (true);		
		while (arg[i] >= '0' && arg[i] <= '9')
			i++;
		if (arg[i] == 'f')
			return (true);		
	}
	return (false);
}

int	main(int argc, char **argv)
{
	char	c;
	int		i;
	float	f;
	double	d;
	
	if (argc != 2)
		return (0);
	std::string	s = argv[1];

	if (s == "nan")
	{
		d = std::numeric_limits<double>::quiet_NaN();
	}
	else if (s == "nanf")
	{
		f = std::numeric_limits<float>::quiet_NaN();
	}
	else if (s == "+inff")
	{
		f = std::numeric_limits<float>::infinity();
	}
	else if (s == "-inff")
	{
		f = -std::numeric_limits<float>::infinity();
	}
	else
	{
		if (inputIsFloat(argv[1]))
		{
			try
			{
				f = std::stof(s);
			}
			catch(const std::exception& e)
			{
				std::cout << "char : impossible" << std::endl;
				std::cout << "int : impossible" << std::endl;
				std::cout << "float : impossible" << std::endl;
				std::cout << "double : impossible" << std::endl;
				return (0);
			}

		}
		else
		{
			try
			{
				d = std::stod(s);
			}
			catch(const std::exception& e)
			{
				std::cout << "char : impossible" << std::endl;
				std::cout << "int : impossible" << std::endl;
				std::cout << "float : impossible" << std::endl;
				std::cout << "double : impossible" << std::endl;
				return (0);
			}
		}
	}

	if (s == "nanf" || s == "+inff" || s == "-inff" || inputIsFloat(argv[1]))
	{
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		f = static_cast<float>(f);
		d = static_cast<double>(f);
	}
	else
	{
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		d = static_cast<double>(d);
	}
	

	if (s == "nan" || s == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
	}	
	else if (d > 255 || 0 > d)
	{
		std::cout << "char : impossible" << std::endl;
	}
	else if (c >= ' ' && c <= '~')
	{
		std::cout << "char :" << c << std::endl;
	}
	else
	{
		std::cout << "char : Non displayable" << std::endl;
	}

	if (s == "nan" || s == "nanf")
	{
		std::cout << "int : impossible" << std::endl;
	}	
	else if (std::numeric_limits<int>::max() >= d && d >= std::numeric_limits<int>::lowest())
	{
		std::cout << "int : " << i << std::endl;
	}
	else
	{
		std::cout << "int : impossible" << std::endl;
	}

	if (std::isinf(f))
	{
		std::cout << "float : " << f << "f" << std::endl;
	}
	else if (std::isnan(f))
	{
		std::cout << "float : " << f << "f" << std::endl;
	}
	else if (std::numeric_limits<float>::max() >= f && f >= std::numeric_limits<float>::lowest())
	{
		std::cout << "float : " << f;
		if (decimalPartIs0(argv[1]) == true)
		{
			std::cout << ".0";
		}
		std::cout << "f" << std::endl;
	}
	else
	{
		std::cout << "float : impossible" << std::endl;
	}

	if (std::isinf(d))
	{
		std::cout << "double : " << d << std::endl;
	}
	else
	{
		std::cout << "double : " << d;
		if (decimalPartIs0(argv[1]) == true && s != "nan" && s != "nanf")
		{
			std::cout << ".0";
		}
		std::cout << std::endl;
	}
	return (0);
}

