/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/11 13:49:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	squaring(int& i)
{
	//std::cout << "squaring() called" << std::endl;
	i *= i;
}

class Iter
{
public:
	Iter(int *array, size_t size, void (*func)(int&))
	{
		std::cout << "Iter Default constructor called" << std::endl;
		size_t		i;

		i = 0;
		while (i < size)
		{
			func(array[i]);
			i++;
		}
	}
	~Iter()
	{
		std::cout << "Iter Destructor called" << std::endl;
	}
private:
};

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

int		main()
{
	int i;
	int array[5] = {1,2,3,4,5};
	
	Iter(array, 5, squaring);
	i = 0;
	while (i < 5)
	{
		std::cout << array[i] << std::endl;
		i++;
	}

	iter <int> (array, 5, squaring);
	i = 0;
	while (i < 5)
	{
		std::cout << array[i] << std::endl;
		i++;
	}

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iteri(tab, 5, print);
	iter <Awesome> (tab2, 5, print);
	
	return 0;
}