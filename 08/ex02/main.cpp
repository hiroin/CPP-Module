/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 09:30:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	for (int i = 0; i < 5; ++i) {
		mstack.push(i);
	}
	std::cout << mstack.size() << "\n"
				<< std::boolalpha << mstack.empty() << std::endl;
	std::cout << mstack.top() << std::endl;
	while (!mstack.empty())
	{
		std::cout << mstack.top() << std::endl;
		mstack.pop();
	}
	for (int i = 0; i < 5; ++i) {
		mstack.push(i);
	}
	std::cout << "-------------------" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	it++;
	std::cout << *it << std::endl;
	it--;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "-------------------" << std::endl;
	std::list<int> list;
	for (int i = 0; i < 5; ++i) {
		list.push_back(i);
	}
	std::list<int>::iterator itList = list.begin();
	std::list<int>::iterator iteList = list.end();
	itList++;
	std::cout << *itList << std::endl;
	itList--;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}
	std::cout << "-------------------" << std::endl;
	// std::deque<int>::iterator it = mstack.begin();
	// std::deque<int>::iterator it = mstack.end();

	// MutantStack mStackCopy(mstack);
	// std::cout << mStackCopy.size() << "\n"
	// 			<< std::boolalpha << mStackCopy.empty() << std::endl;

	// MutantStack mStackSubstitute;
	// mStackSubstitute = mstack;
	// std::cout << mStackSubstitute.size() << "\n"
	// 			<< std::boolalpha << mStackSubstitute.empty() << std::endl;
	
	std::stack<int> s(mstack);
	std::cout << mstack.size() << "\n"
				<< std::boolalpha << mstack.empty() << std::endl;
	std::cout << mstack.top() << std::endl;	
}