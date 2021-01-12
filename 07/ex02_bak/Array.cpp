/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/12 02:23:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

bool	Array::setValue(int v, size_t position)
{
	if (size_ == 0 || position > size_ - 1)
		throw std::out_of_range("out of the limits");
	array_[position] = v;
	return (true);
}

size_t Array::getSize() const
{
	return (size_);
}

int &Array::operator[](size_t const i) const
{
	if (size_ == 0 || i > size_ - 1)
		throw std::out_of_range("out of the limits");
	return (array_[i]);
}

Array::Array() : size_(0)
{
	std::cout << "Array Default constructor called" << std::endl;
	array_ = new int[0];
	std::cout << array_ << std::endl;
}

Array::Array(unsigned int n) : size_(n)
{
	std::cout << "Array constructor called with an unsigned int n" << std::endl;
	array_ = new int[n];
	std::cout << array_ << std::endl;
	if (size_ > 0)
	{
		size_t i = 0;
		while (i < size_)
		{
			array_[i] = 0;
			i++;
		}
	}	
}

Array::~Array()
{
	std::cout << "Array Destructor called" << std::endl;
	delete [] array_;
}

Array::Array(const Array& other) : size_(other.size_)
{
	std::cout << "Array copy constructor called" << std::endl;
	array_ = new int[other.size_];
	if (size_ > 0)
	{
		size_t i = 0;
		while (i < size_)
		{
			array_[i] = other.array_[i];
			i++;
		}
	}
}

Array& 	Array::operator = (const Array& other)
{
	std::cout << "Array Assignation operator called" << std::endl;
	delete [] array_;
	size_ = other.size_;
	array_ = new int[other.size_];
	if (size_ > 0)
	{
		size_t i = 0;
		while (i < size_)
		{
			array_[i] = other.array_[i];
			i++;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Array& operation)
{
	os << "-----------------------------------" << std::endl;
	os << "Array" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
