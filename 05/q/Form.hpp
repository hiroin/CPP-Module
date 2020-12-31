#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
public:
	Form(int grade);
	virtual ~Form();
	int	validateGrade(int grade) const;
private:
	Form();
	const int	grade_;
};

#endif
