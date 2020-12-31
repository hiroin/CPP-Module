#include "Form.hpp"

// int main(void)
// {
// 	Form* form001 = new Form(1);
// 	delete form001;

// 	Form* form002 = new Form(0);

// 	return 0;
// }

int main(void) try {
    Form* form001 = new Form(1);
    delete form001;

    Form* form002 = new Form(0);

    return 0;
} catch (std::exception& ex) {
  std::cerr << "exception caught in main: " << ex.what();
}