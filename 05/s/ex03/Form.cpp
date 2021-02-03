/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/01 12:09:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

std::string	Form::getTarget() const
{
	return (target_);
}

std::string	Form::getName() const
{
	return (name_);
}

bool	Form::getSigned() const
{
	return (signed_);
}

int		Form::getGradeRequiredToSign() const
{
	return (gradeRequiredToSign_);
}

int		Form::getGradeRequiredToExecute() const
{
	return (gradeRequiredToExecute_);
}

Form::Form() : name_("default"), signed_(false), gradeRequiredToSign_(150), gradeRequiredToExecute_(150), target_("default")
{
	std::cout << "Form Default constructor called" << std::endl;
}

std::runtime_error Form::GradeTooHighException() const
{
	return std::runtime_error("GradeTooHigh");
}

std::runtime_error Form::GradeTooLowException() const
{
	return std::runtime_error("GradeTooLow");
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeRequiredToSign_)
	{
		signed_ = true;
		std::cout << bureaucrat.getName() << " signed." << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
	
}

int		Form::validateGrade(int grade) const
{
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	if (grade > 150)
	{
		throw GradeTooLowException();
	}
	return (grade);
}

bool	Form::checkIfItIsSigned() const
{
	if (signed_ == true)
	{
		return true;
	}
	throw std::runtime_error("Not signed.");
}

bool	Form::checkGradeRequiredForExecution(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= gradeRequiredToExecute_)
	{
		return true;
	}
	throw Form::GradeTooLowException();
}

bool	Form::checkFormIsExecutable(Bureaucrat const & executor) const
{
	if (checkIfItIsSigned() && checkGradeRequiredForExecution(executor))
		return true;
	else
		return false;
}

Form::Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute, std::string target)
try
 :  name_(name)
  , signed_(false)
  , gradeRequiredToSign_(validateGrade(gradeRequiredToSign))
  , gradeRequiredToExecute_(validateGrade(gradeRequiredToExecute))
  , target_(target)
{
	std::cout << "Form Name constructor called" << std::endl;
}
catch (std::exception& e)
{
	std::cout << "Form Name constructor call Failed" << std::endl;
	throw;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form& form)
	: name_(form.name_), signed_(form.signed_), gradeRequiredToSign_(form.gradeRequiredToSign_), gradeRequiredToExecute_(form.gradeRequiredToExecute_)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& 	Form::operator = (const Form& fixed)
{
	std::cout << "Form Assignation operator called" << std::endl;
	signed_ = fixed.signed_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "-----------------------------------" << std::endl;
	os << "Form" << std::endl;
	os << " target : " << form.getTarget() << std::endl;
	os << " name   : " << form.getName() << std::endl;
	os << " signed : " << form.getSigned() << std::endl;
	os << " gradeRequiredToSign    : " << form.getGradeRequiredToSign() << std::endl;
	os << " gradeRequiredToExecute : " << form.getGradeRequiredToExecute() << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
