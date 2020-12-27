/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/27 11:59:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::exception Bureaucrat::GradeTooHighException()
{
	//std::cout << "GradeTooHigh" << std::endl;
	return std::runtime_error("GradeTooHigh");
}

std::exception Bureaucrat::GradeTooLowException()
{
	//std::cout << "GradeTooLow" << std::endl;
	return std::runtime_error("GradeTooLow");
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

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	(void)bureaucrat;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& 	Bureaucrat::operator = (const Bureaucrat& fixed)
{
	(void)fixed;
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
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
