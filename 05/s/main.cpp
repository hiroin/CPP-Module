#include <iostream>

void function_A(void)
{
	std::cout << "hello" << std::endl;
}
void function_B(void)
{
	std::cout << "bye" << std::endl;
}

int function_C(void)
{
	return 1;
}
int function_D(void)
{
	return 2;
}

void (* const FuncPtrArrayVoid[])(void) = {
	function_A,
	function_B,
};

int (* const FuncPtrArrayInt[])(void) = {
	function_C,
	function_D,
};

struct forms
{
	int				i;
	std::string		s;
};

forms myForms[2] =
{
	  {1, "A"}
	, {2, "B"}
};

class Base
{
public:
	void virtual function_out() = 0;
};

class A : public Base
{
public:
	void function_out()
	{
		std::cout << "class A function" << std::endl;
	}
};

class B : public Base
{
public:
	void function_out()
	{
		std::cout << "class B function" << std::endl;
	}
};

Base* function_E(int e)
{
	return new A();
}

Base* function_F(int f)
{
	return new B();
}

Base* (*newA)(int) = function_E;
Base* (*newB)(int) = function_F;

// Base* (* const FuncPtrArrayInt[])(void) = {
// 	function_E,
// 	function_F
// };

struct classesbox
{
	int		i;
	Base*	b;
};

classesbox classes[2] =
{
	  {1, function_E()}
	, {2, function_F()}
};

int main(void)
{
	int		num;
	int		i;

	// FuncPtrArrayVoid[0]();
	// FuncPtrArrayVoid[1]();
	// std::cout << FuncPtrArrayInt[0]() << std::endl;
	// std::cout << FuncPtrArrayInt[1]() << std::endl;

	// std::cin >> num;
	// i = 0;
	// while (i < 2)
	// {
	// 	if (myForms[i].i == num)
	// 	{
	// 		std::cout << myForms[i].s << std::endl;
	// 		break;
	// 	}
	// 	i++;
	// }

	std::cin >> num;
	Base*	base;
	i = 0;
	while (i < 2)
	{
		if (classes[i].i == num)
		{
			base = classes[i].b;
			base->function_out();
			break;
		}
		i++;
	}
}