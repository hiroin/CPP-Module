/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2020/12/31 07:34:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat* bureaucrat030 = new Bureaucrat("bureaucrat030", 030);
	std::cout << *bureaucrat030;
	Bureaucrat* bureaucrat010 = new Bureaucrat("bureaucrat010", 010);
	std::cout << *bureaucrat010;
	try
	{
		Form* form001 = new Form("form001", 10, 20);
		std::cout << *form001;
		bureaucrat030->signForm(*form001);
		std::cout << *form001;
		bureaucrat010->signForm(*form001);
		std::cout << *form001;
		bureaucrat010->signForm(*form001);
		std::cout << *form001;
		
		delete form001;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form* form002 = new Form("form001", 1, 151);
		delete form002;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete bureaucrat030;
	delete bureaucrat010;
	return 0;
}
