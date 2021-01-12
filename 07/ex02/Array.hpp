/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/12 12:54:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_HPP
# define OPERATION_HPP

# include <iostream>
# include <string>

template <typename TYPE>
class Array
{
public:
	bool	setValue(TYPE v, size_t size);
	size_t	getSize() const;
	int&	operator[](size_t const i) const;
	Array();
	Array(unsigned int n);
	virtual ~Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
private:
	TYPE		*array_;
	size_t	size_;
};

template <typename TYPE>
std::ostream&	operator<<(std::ostream& os, const Array <TYPE> & operation);

template <typename TYPE>
bool	Array<TYPE>::setValue(TYPE v, size_t position)
{
	if (size_ == 0 || position > size_ - 1)
		throw std::out_of_range("out of the limits");
	array_[position] = v;
	return (true);
}

template <typename TYPE>
size_t Array<TYPE>::getSize() const
{
	return (size_);
}

template <typename TYPE>
int &Array<TYPE>::operator[](size_t const i) const
{
	if (size_ == 0 || i > size_ - 1)
		throw std::out_of_range("out of the limits");
	return (array_[i]);
}

template <typename TYPE>
Array<TYPE>::Array() : size_(0)
{
	std::cout << "Array Default constructor called" << std::endl;
	array_ = new TYPE[0];
	std::cout << array_ << std::endl;
}

template <typename TYPE>
Array<TYPE>::Array(unsigned int n) : size_(n)
{
	std::cout << "Array constructor called with an unsigned int n" << std::endl;
	array_ = new TYPE[n];
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

template <typename TYPE>
Array<TYPE>::~Array()
{
	std::cout << "Array Destructor called" << std::endl;
	delete [] array_;
}

template <typename TYPE>
Array<TYPE>::Array(const Array& other) : size_(other.size_)
{
	std::cout << "Array copy constructor called" << std::endl;
	array_ = new TYPE[other.size_];
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

template <typename TYPE>
Array<TYPE>& Array<TYPE>::operator = (const Array& other)
{
	std::cout << "Array Assignation operator called" << std::endl;
	delete [] array_;
	size_ = other.size_;
	array_ = new TYPE[other.size_];
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

template <typename TYPE>
std::ostream&	operator<<(std::ostream& os, const Array<TYPE>& operation)
{
	os << "-----------------------------------" << std::endl;
	os << "Array" << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}

#endif
