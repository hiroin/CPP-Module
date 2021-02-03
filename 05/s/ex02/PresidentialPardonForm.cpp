/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 06:55:01 by user42            #+#    #+#             */
/*   Updated: 2020/12/31 09:31:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

bool		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

	std::cout << executor.getName() << " execute " << this->getTarget() << std::endl;
	if (checkFormIsExecutable(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
		return true;
	}
	return false;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5, "default")
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm Target constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form("PresidentialPardonForm", 25, 5, other.getTarget())
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm& 	PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	return (*this);
}
