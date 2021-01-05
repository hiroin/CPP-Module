/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 09:21:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cfloat>
# include <cmath>
# include <limits>
# include <cctype>

class Cast
{
public:
	Cast(std::string s);
	virtual ~Cast();
	Cast(const Cast& Cast);
	Cast& 	operator = (const Cast& other);
private:
	Cast();
};

std::ostream&	operator<<(std::ostream& os, const Cast& cast);

#endif
