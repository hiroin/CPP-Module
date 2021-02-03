/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/01/03 09:23:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# define NUMBER_OF_FORMS 3

class Intern
{
public:
	Form*	makeForm(std::string formName, std::string formTarger) const;
	Intern();
	virtual ~Intern();
	Intern(const Intern& other);
	Intern& 	operator = (const Intern& other);
private:
	std::string forms_[NUMBER_OF_FORMS] =
		{ "robotomy request", "presidential pardon", "shrubbery creation" };
	static Form* newRobotomyRequestForm(std::string target);
	static Form* newPresidentialPardonForm(std::string target);
	static Form* newShrubberyCreationForm(std::string target);
	typedef Form* (*t_forms)(std::string);
	t_forms forms[3] = {newRobotomyRequestForm, newPresidentialPardonForm, newShrubberyCreationForm};
};

#endif
