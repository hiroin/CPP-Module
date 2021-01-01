/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/31 09:31:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

bool		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	cmd;

	std::cout << executor.getName() << " execute " << this->getTarget() << std::endl;
	//if (checkIfItIsSigned() && checkGradeRequiredForExecution(executor))
	if (checkFormIsExecutable(executor))
	{
		cmd += "tree > ";
		cmd += this->getTarget();
		cmd += "_shrubbery";
		const char* ccmd = cmd.c_str();
		if (system(ccmd) == 0)
		{
			std::cout << this->getTarget() << " Create a file." << std::endl;
			return true;
		}
		else
		{
			std::cout << this->getTarget() << " Cannot create a file." << std::endl;
			return false;
		}
	}
	return false;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 150, 150, "default")
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm Target constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form("ShrubberyCreationForm", 145, 137, other.getTarget())
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm& 	ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	return (*this);
}

// std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form)
// {
// 	os << "-----------------------------------" << std::endl;
// 	os << "ShrubberyCreationForm" << std::endl;
// 	os << " target : " << form.getTarget() << std::endl;
// 	os << " name   : " << form.getName() << std::endl;
// 	os << " signed : " << form.getSigned() << std::endl;
// 	os << " gradeRequiredToSign    : " << form.getGradeRequiredToSign() << std::endl;
// 	os << " gradeRequiredToExecute : " << form.getGradeRequiredToExecute() << std::endl;
// 	os << "-----------------------------------" << std::endl;
//     return os;
// }
