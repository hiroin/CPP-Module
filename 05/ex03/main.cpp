/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:58:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/03 09:26:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

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
		Intern* intern001 = new Intern();

		std::cout << "--------------------------------"<< std::endl;
		Form* shrubberyCreationForm002 = intern001->makeForm("shrubbery creation","Bender_shrubberyCreationForm");
		std::cout << std::endl;
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->signForm(*shrubberyCreationForm002);
		bureaucrat140->executeForm(*shrubberyCreationForm002);
		bureaucrat010->executeForm(*shrubberyCreationForm002);
		std::cout << std::endl;
		delete shrubberyCreationForm002;
		
		std::cout << "--------------------------------"<< std::endl;
		Form* PresidentialPardonForm001 = intern001->makeForm("presidential pardon","Bender_PresidentialPardonForm");
		std::cout << std::endl;
		bureaucrat140->executeForm(*PresidentialPardonForm001);
		bureaucrat010->signForm(*PresidentialPardonForm001);
		bureaucrat140->executeForm(*PresidentialPardonForm001);
		bureaucrat005->executeForm(*PresidentialPardonForm001);
		std::cout << std::endl;
		delete PresidentialPardonForm001;		

		std::cout << "--------------------------------"<< std::endl;
		Form* RobotomyRequestForm001 = intern001->makeForm("robotomy request","Bender_RobotomyRequestForm");
		std::cout << std::endl;
		bureaucrat140->executeForm(*RobotomyRequestForm001);
		bureaucrat010->signForm(*RobotomyRequestForm001);
		bureaucrat140->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		bureaucrat005->executeForm(*RobotomyRequestForm001);
		std::cout << std::endl;
		delete RobotomyRequestForm001;

		std::cout << "--------------------------------"<< std::endl;
		try
		{
			Form* noneForm = intern001->makeForm("none","Bender_RobotomyRequestForm");
			delete noneForm;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete intern001;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete bureaucrat140;
	delete bureaucrat030;
	delete bureaucrat010;
	delete bureaucrat005;
	return 0;
}
