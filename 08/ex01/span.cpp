/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 15:24:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void 	Span::addNumber(int n)
{
	if(array_.size() == n_)
		throw std::out_of_range("already N of them stored");
	array_.push_back(n);
}

void 	Span::addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
	if (std::distance(first, last) + array_.size() > n_)
		throw std::out_of_range("Not enough N.");
	for(std::vector<int>::const_iterator itr = first; itr != last; ++itr)
	{
		array_.push_back(*itr);
	}
}

int		Span::getN(unsigned int n)
{
	return (array_[n]);
}

long		Span::shortestSpan()
{
	if (array_.size() < 2)
		throw std::runtime_error("there’s no numbers stored, or only one, there is no span to find");
	std::sort(array_.begin(), array_.end());
	
	return (std::abs(array_[0] - array_[1]));
}

long		Span::longestSpan()
{
	if (array_.size() < 2)
		throw std::runtime_error("there’s no numbers stored, or only one, there is no span to find");
	std::vector<int>::iterator iterMax = std::max_element(array_.begin(), array_.end());
	std::vector<int>::iterator iterMin = std::min_element(array_.begin(), array_.end());
	return (std::abs(*iterMax - *iterMin));
}

Span::Span()
{
	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int n) : n_(n)
{
	std::cout << "Span Name constructor called" << std::endl;
	array_.reserve(n_);
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

Span::Span(const Span& other) : n_(other.n_)
{
	std::cout << "Span Copy constructor called" << std::endl;
	array_ = other.array_;
}

Span& 	Span::operator = (const Span& other)
{
	std::cout << "Span Assignation operator called" << std::endl;
	array_ = other.array_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Span& bureaucrat)
{
	os << "-----------------------------------" << std::endl;
	os << "Span" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
