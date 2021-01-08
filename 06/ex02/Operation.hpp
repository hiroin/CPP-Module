/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operation.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/08 13:07:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_HPP
# define OPERATION_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Operation
{
public:
	Base * generate(void);
	void identify_from_pointer(Base * p);
	void identify_from_reference(Base & p);
	Operation();
	virtual ~Operation();
	Operation(const Operation& other);
	Operation& 	operator = (const Operation& other);
private:
	int genRand(int min, int max);
};

std::ostream&	operator<<(std::ostream& os, const Operation& operation);

#endif
