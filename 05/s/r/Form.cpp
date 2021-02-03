#include "Form.hpp"

int		Form::getGrade() const
{
	return grade_;
}

Form::Form() : grade_(1)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "-----------------------------------" << std::endl;
	os << "Form" << std::endl;
	os << " name   : " << form.getGrade() << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}