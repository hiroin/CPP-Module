/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 08:43:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>

template <typename TYPE>
class MutantStack : public std::stack<TYPE>
{
public:
	typedef typename std::deque<TYPE>::iterator iterator;
	iterator begin()
	{
		return c.begin();
	}
	std::deque<TYPE>::const_iterator begin() const
	{
		return c.begin();
	}
	iterator end()
	{
		return c.end();
	}	
	std::deque<TYPE>::const_iterator end() const
	{
		return c.end();
	}	
	std::deque<TYPE>::reverse_iterator rbegin()
	{
		return c.rbegin();
	}
	std::deque<TYPE>::const_reverse_iterator rbegin() const;
	{
		return c.rbegin();
	}
	std::deque<TYPE>::reverse_iterator rend()
	{
		return c.rend();
	}
	std::deque<TYPE>::const_reverse_iterator rend() const;
	{
		return c.rend();
	}
	MutantStack();
	~MutantStack();
	// MutantStack(const MutantStack& other);
	MutantStack& operator = (const MutantStack& other);
private:
};

template <typename TYPE>
MutantStack<TYPE>::MutantStack(){}

template <typename TYPE>
MutantStack<TYPE>::~MutantStack(){}

// template <typename TYPE>
// MutantStack<TYPE>::MutantStack(const MutantStack& other) : stack(other){}

template <typename TYPE>
MutantStack<TYPE>& 	MutantStack<TYPE>::operator = (const MutantStack& other)
{
	if (this != &other)
	{ 
		stack::operator=(other);
	}
	return (*this);
}

#endif
