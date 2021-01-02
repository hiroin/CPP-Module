/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 04:35:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat* bureaucrat140 = new Bureaucrat("bureaucrat140", 140);
	// std::cout << *bureaucrat030;
	Bureaucrat* bureaucrat030 = new Bureaucrat("bureaucrat030", 030);
	// std::cout << *bureaucrat030;
	Bureaucrat* bureaucrat010 = new Bureaucrat("bureaucrat010", 010);
	// std::cout << *bureaucrat010;
	Bureaucrat* bureaucrat005 = new Bureaucrat("bureaucrat005", 005);
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
		delete shrubberyCreationForm001;
		
		std::cout << "--------------------------------"<< std::endl;
		Form* shrubberyCreationForm002 = new ShrubberyCreationForm("shrubberyCreationForm002");
		std::cout << std::endl;
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->signForm(*shrubberyCreationForm002);
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->executeForm(*shrubberyCreationForm002);
		std::cout << std::endl;
		delete shrubberyCreationForm002;
		
		std::cout << "--------------------------------"<< std::endl;
		Form* PresidentialPardonForm001 = new PresidentialPardonForm("PresidentialPardonForm001");
		std::cout << std::endl;
		bureaucrat140->executeForm(*PresidentialPardonForm001);
		bureaucrat010->signForm(*PresidentialPardonForm001);
		bureaucrat140->executeForm(*PresidentialPardonForm001);
		bureaucrat005->executeForm(*PresidentialPardonForm001);
		std::cout << std::endl;
		delete PresidentialPardonForm001;		

		std::cout << "--------------------------------"<< std::endl;
		Form* RobotomyRequestForm001 = new RobotomyRequestForm("RobotomyRequestForm001");
		std::cout << std::endl;
		bureaucrat140->executeForm(*RobotomyRequestForm001);
		bureaucrat010->signForm(*RobotomyRequestForm001);
		bureaucrat140->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		std::cout << std::endl;
		delete PresidentialPardonForm001;		

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete bureaucrat030;
	delete bureaucrat010;
	return 0;
}
