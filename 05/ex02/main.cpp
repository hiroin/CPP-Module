/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/01 12:13:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat* bureaucrat140 = new Bureaucrat("bureaucrat140", 140);
	// std::cout << *bureaucrat030;
	Bureaucrat* bureaucrat030 = new Bureaucrat("bureaucrat030", 030);
	// std::cout << *bureaucrat030;
	Bureaucrat* bureaucrat010 = new Bureaucrat("bureaucrat010", 010);
	// std::cout << *bureaucrat010;
	try
	{
		ShrubberyCreationForm* shrubberyCreationForm001 = new ShrubberyCreationForm("shrubberyCreationForm001");
		std::cout << *shrubberyCreationForm001;
		// bureaucrat030->signForm(*shrubberyCreationForm001);
		// std::cout << *shrubberyCreationForm001;
		// bureaucrat010->signForm(*shrubberyCreationForm001);
		// std::cout << *shrubberyCreationForm001;
		try
		{
			shrubberyCreationForm001->execute(*bureaucrat010);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		bureaucrat010->signForm(*shrubberyCreationForm001);
		std::cout << *shrubberyCreationForm001;
		try
		{
			shrubberyCreationForm001->execute(*bureaucrat140);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			shrubberyCreationForm001->execute(*bureaucrat010);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "--------------------------------"<< std::endl;
		Form* shrubberyCreationForm002 = new ShrubberyCreationForm("shrubberyCreationForm002");
		std::cout << std::endl;
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->signForm(*shrubberyCreationForm002);
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->executeForm(*shrubberyCreationForm002);
		std::cout << std::endl;
		delete shrubberyCreationForm001;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete bureaucrat030;
	delete bureaucrat010;
	return 0;
}
