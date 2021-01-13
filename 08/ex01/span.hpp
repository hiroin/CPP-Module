/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 14:50:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <climits>

class Span
{
public:
	int		getN(unsigned int n);
	void 	addNumber(int n);
	void 	addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last);
	long	shortestSpan();
	long	longestSpan();
	Span(unsigned int n);
	virtual ~Span();
	Span(const Span& Span);
	Span& 	operator = (const Span& Span);
private:
	Span();
	unsigned int		n_;
	unsigned int		numberOfEntries_;
	std::vector<int>	array_;
};

std::ostream&	operator<<(std::ostream& os, const Span& span);

#endif
