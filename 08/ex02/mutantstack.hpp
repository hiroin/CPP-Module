/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 09:45:01 by user42           ###   ########.fr       */
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
	typedef typename std::deque<TYPE>::const_iterator const_iterator;
	typedef typename std::deque<TYPE>::reverse_iterator reverse_iterator;
	typedef typename std::deque<TYPE>::const_reverse_iterator const_reverse_iterator;
	iterator begin();
	const_iterator begin() const;
	iterator end();
	const_iterator end() const;
	reverse_iterator rbegin();
	const_reverse_iterator rbegin() const;
	reverse_iterator rend();
	const_reverse_iterator rend() const;
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack& operator = (const MutantStack& other);
private:
};

template <typename TYPE>
typename std::deque<TYPE>::iterator MutantStack<TYPE>::begin()
{
	//return c.begin();
	return std::stack<TYPE>::c.begin();
}

template <typename TYPE>
typename std::deque<TYPE>::const_iterator MutantStack<TYPE>::begin() const
{
	return this->c.begin();
}

template <typename TYPE>
typename std::deque<TYPE>::iterator MutantStack<TYPE>::end()
{
	return this->c.end();
}

template <typename TYPE>
typename std::deque<TYPE>::const_iterator MutantStack<TYPE>::end() const
{
	return this->c.end();
}


template <typename TYPE>
typename std::deque<TYPE>::reverse_iterator MutantStack<TYPE>::rbegin()
{
	return this->c.rbegin();
}

template <typename TYPE>
typename std::deque<TYPE>::const_reverse_iterator MutantStack<TYPE>::rbegin() const
{
	return this->c.rbegin();
}

template <typename TYPE>
typename std::deque<TYPE>::reverse_iterator MutantStack<TYPE>::rend()
{
	return this->c.rend();
}

template <typename TYPE>
typename std::deque<TYPE>::const_reverse_iterator MutantStack<TYPE>::rend() const
{
	return this->c.rend();
}

template <typename TYPE>
MutantStack<TYPE>::MutantStack(){}

template <typename TYPE>
MutantStack<TYPE>::~MutantStack(){}

template <typename TYPE>
MutantStack<TYPE>::MutantStack(const MutantStack& other) : std::stack<TYPE>(other){}

template <typename TYPE>
MutantStack<TYPE>& 	MutantStack<TYPE>::operator = (const MutantStack& other)
{
	if (this != &other)
	{ 
		std::stack<int>::operator=(other);
	}
	return (*this);
}

#endif
