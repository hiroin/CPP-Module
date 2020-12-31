#include "Form.hpp"

Form::Form() : grade_(1) {}

int		Form::validateGrade(int grade) const
{
	if (grade < 1)
	{
		throw std::runtime_error("Grade Error");
	}
	return (grade);
}

Form::Form(int grade)
try
 :  grade_(validateGrade(grade))
{
	std::cout << "Form Name constructor called" << std::endl;
}
catch (std::exception& ex)
{
	std::cout << "Form Name constructor call Failed" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}