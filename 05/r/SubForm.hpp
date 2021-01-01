#ifndef SUBFORM_HPP
# define SUBFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class SubForm : public Form
{
public:
	int		getTarget() const;
	SubForm();
	virtual ~SubForm();
private:
	const int	target_;
};

std::ostream&	operator<<(std::ostream& os, const SubForm& subForm);

#endif
