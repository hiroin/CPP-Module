#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
public:
	int		virtual getGrade() const;
	Form();
	virtual ~Form();
private:
	const int	grade_;
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif

