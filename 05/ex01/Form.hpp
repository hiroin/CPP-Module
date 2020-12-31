/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/31 07:17:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
public:
	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeRequiredToSign() const;
	int			getGradeRequiredToExecute() const;
	int			validateGrade(int grade) const;
	std::runtime_error	GradeTooHighException() const;
	std::runtime_error	GradeTooLowException() const;
	void		beSigned(Bureaucrat& bureaucrat);
	Form(std::string name, int ggradeRequiredToSign, int gradeRequiredToExecute);
	virtual ~Form();
	Form(const Form& Form);
	Form& 	operator = (const Form& Form);
private:
	Form();
	const std::string	name_;
	bool				signed_;
	const int			gradeRequiredToSign_;
	const int			gradeRequiredToExecute_;
};

std::ostream&	operator<<(std::ostream& os, const Form& Form);

#endif
