/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/09 06:28:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
public:
	Awesome( int n ) : _n( n ) {}
	bool operator ==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator !=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator >( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator <( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator >=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator <=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

	//Awesome(){}
	Awesome& 	operator = (const Awesome& other)
	{
		_n = other._n;
		return *this;
	}
	int	getN(void)
	{
		return _n;
	}
private:
	int _n;
};

int		main()
{
	Awesome s1(1);
	Awesome s2(2);
	std::cout << "s1 = " << s1.getN() << ", s2 = " << s2.getN() << std::endl;
	::swap(s1, s2);
	std::cout << "s1 = " << s1.getN() << ", s2 = " << s2.getN() << std::endl;
	std::cout << "min( s1, s2 ) = " << min(s1, s2).getN() << std::endl;
	std::cout << "max( s1, s2 ) = " << max(s1, s2).getN() << std::endl;	

	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}