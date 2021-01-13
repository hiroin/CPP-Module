/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 15:23:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	//std::cout << sp.getN(0) << std::endl;
	sp.addNumber(3);
	//std::cout << sp.getN(1) << std::endl;

	// Span spCopy(sp);
	// std::cout << sp.getN(0) << std::endl;
	// std::cout << sp.getN(1) << std::endl;

	// Span sp2 = Span(5);
	// sp2.addNumber(1);
	// sp2.addNumber(2);
	// spCopy = sp2;
	// std::cout << spCopy.getN(0) << std::endl;
	// std::cout << spCopy.getN(1) << std::endl;

	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;

	sp = Span(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(11);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	int	data[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> tmp(data, data + 6);
	try
	{
		sp.addNumber(tmp.begin(), tmp.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	int	data2[] = {1, 3, 5, 7};
	std::vector<int> tmp2(data2, data2 + 4);
	sp.addNumber(tmp2.begin(), tmp2.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << RAND_MAX << std::endl;
	Span sp10000 = Span(10000);
	srand((unsigned)time(NULL));
	int	data3[10000];
	int	i = 0;
	while (i < 10000)
	{
		data3[i] = rand();
		i++;
	}	
	std::vector<int> tmp3(data3, data3 + 10000);
	sp10000.addNumber(tmp3.begin(), tmp3.end());
	std::cout << sp10000.shortestSpan() << std::endl;
	std::cout << sp10000.longestSpan() << std::endl;
	
	return 0;
}