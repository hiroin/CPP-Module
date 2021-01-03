/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/03 09:16:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::newRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::newPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::newShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string formName, std::string formTarger) const
{
	std::cout << "Intern creates " << formName << std::endl;

	int		i;
	i = 0;
	while (i < NUMBER_OF_FORMS)
	{
		if (forms_[i] == formName)
		{
			return (forms[i])(formName);
		}
		i++;
	}
	throw std::runtime_error("Intern couldn't make the form.");
	return NULL;
}

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern& Intern)
{
	std::cout << "Intern Copy constructor called" << std::endl;
}

Intern& 	Intern::operator = (const Intern& fixed)
{
	std::cout << "Intern Assignation operator called" << std::endl;
	return (*this);
}
