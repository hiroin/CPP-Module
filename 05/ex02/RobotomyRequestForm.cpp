/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/31 09:31:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <random>

bool		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " execute " << this->getTarget() << std::endl;
	srand((unsigned int)time(NULL));
	if (checkFormIsExecutable(executor))
	{
		if (rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized." << std::endl;
		else
			std::cout << this->getTarget() << " has not been robotomized." << std::endl;
		return true;
	}
	return false;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45, "default")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm Target constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form("RobotomyRequestForm", 72, 45, other.getTarget())
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm& 	RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	return (*this);
}
