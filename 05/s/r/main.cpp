#include "SubForm.hpp"

int main(void)
{
	Form* form001 = new Form();
	std::cout << *form001 << std::endl;
	delete form001;

	SubForm* subForm001 = new SubForm();
	std::cout << *subForm001 << std::endl;
	delete subForm001;

	Form* subForm002 = new SubForm();
	std::cout << *subForm002 << std::endl;

    SubForm* subForm002_cast = dynamic_cast<SubForm*>(subForm002);
    std::cout << *subForm002_cast;

	delete subForm001;

	return 0;
}

