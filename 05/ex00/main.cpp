/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/27 14:51:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat* bureaucrat001 = new Bureaucrat("bureaucrat001", 150);
	std::cout << *bureaucrat001;
	
	bureaucrat001->incrementGrade();
	std::cout << *bureaucrat001;

	bureaucrat001->decrementGrade();
	std::cout << *bureaucrat001;

	bureaucrat001->decrementGrade();
	std::cout << *bureaucrat001;

	delete bureaucrat001;
	std::cout << std::endl;

	Bureaucrat* bureaucrat002 = new Bureaucrat("bureaucrat002", 1);
	std::cout << *bureaucrat002;
	
	bureaucrat002->incrementGrade();
	std::cout << *bureaucrat002;

	delete bureaucrat002;
	std::cout << std::endl;

	Bureaucrat* bureaucrat003 = new Bureaucrat("bureaucrat003", 0);
	std::cout << *bureaucrat003;
	delete bureaucrat003;
	std::cout << std::endl;

	Bureaucrat* bureaucrat004 = new Bureaucrat("bureaucrat004", 151);
	std::cout << *bureaucrat004;
	delete bureaucrat004;
	std::cout << std::endl;

	return 0;
}
