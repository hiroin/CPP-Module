/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 04:36:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	Bureaucrat::getGrade() const
{
	return (grade_);
}

std::string	Bureaucrat::getName() const
{
	return (name_);
}

void	Bureaucrat::incrementGrade()
{
	std::cout << "incrementGrade" << std::endl;
	try
	{
		if (grade_ - 1 < 1)
			throw std::runtime_error("incrementGrade error!");
		grade_--;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "decrementGrade" << std::endl;
	try
	{
		if (grade_ + 1 > 150)
			throw std::runtime_error("decrementGrade error!");
		grade_++;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

std::runtime_error Bureaucrat::GradeTooHighException()
{
	//std::cout << "GradeTooHigh" << std::endl;
	return std::runtime_error("GradeTooHigh");
}

std::runtime_error Bureaucrat::GradeTooLowException()
{
	//std::cout << "GradeTooLow" << std::endl;
	return std::runtime_error("GradeTooLow");
}

void		Bureaucrat::signForm(Form& form)
{
	if (form.getSigned() == true)
	{
		std::cout << name_ << " cannot sign " << form.getName() << " because already been signed." << std::endl;
		return;
	}
	try
	{
		form.beSigned(*this);
		std::cout << name_ << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << name_ << " cannot sign " << form.getName() << " because GradeTooLow" << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const& form)
{
	try
	{
		if (form.execute(*this))
			std::cout << name_ << " execute " << form.getName() << std::endl;
		else
			std::cout << name_ << " failed to execute " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << name_ << " failed to execute " << form.getName() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	std::cout << "Bureaucrat Name constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		grade_ = grade;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		grade_ = 150;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name_(bureaucrat.name_), grade_(bureaucrat.grade_)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& 	Bureaucrat::operator = (const Bureaucrat& fixed)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	grade_ = fixed.grade_;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << "-----------------------------------" << std::endl;
	os << "Bureaucrat" << std::endl;
	os << " name  : " << bureaucrat.getName() << std::endl;
	os << " grade : " << bureaucrat.getGrade() << std::endl;
	os << bureaucrat.getName() << ", " << "bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}
