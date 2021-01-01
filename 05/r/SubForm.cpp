#include "SubForm.hpp"

int		SubForm::getTarget() const
{
	return target_;
}

SubForm::SubForm() : Form(), target_(10)
{
	std::cout << "SubForm Constructor called" << std::endl;
}

SubForm::~SubForm()
{
	std::cout << "SubForm Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const SubForm& subForm)
{
	os << "-----------------------------------" << std::endl;
	os << "SubForm" << std::endl;
	os << " name   : " << subForm.getGrade() << std::endl;
	os << " target : " << subForm.getTarget() << std::endl;
	os << "-----------------------------------" << std::endl;
    return os;
}