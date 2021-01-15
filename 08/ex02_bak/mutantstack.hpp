/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 05:09:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <climits>
# include <deque>
# include <stack>
# include <list>

class MutantStack : public std::stack<int>
{
public:
	typedef typename std::deque<int>::iterator iterator;
	std::deque<int>::iterator begin();
	std::deque<int>::const_iterator begin() const;
	std::deque<int>::iterator end();
	std::deque<int>::const_iterator end() const;
	std::deque<int>::reverse_iterator rbegin();
	std::deque<int>::const_reverse_iterator rbegin() const;
	std::deque<int>::reverse_iterator rend();
	std::deque<int>::const_reverse_iterator rend() const;
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack& operator = (const MutantStack& other);
private:
};

std::ostream&	operator<<(std::ostream& os, const MutantStack& mutantstack);

#endif
