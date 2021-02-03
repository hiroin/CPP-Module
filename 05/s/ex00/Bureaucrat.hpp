/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:26:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/27 14:22:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
public:
	int			getGrade() const;
	std::string getName() const;
	void		incrementGrade();
	void		decrementGrade();
	std::runtime_error	GradeTooHighException();
	std::runtime_error	GradeTooLowException();
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& 	operator = (const Bureaucrat& bureaucrat);
private:
	Bureaucrat();
	const std::string	name_;
	int					grade_;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
