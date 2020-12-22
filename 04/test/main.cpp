#include <iostream>
using namespace std;

class Squad
{
public:
	Squad();
	virtual ~Squad();
	Squad(const Squad& Squad);
};

Squad::Squad()
{
	std::cout << "Squad Default constructor called" << std::endl;
}

Squad::Squad(const Squad &Squad)
{
	(void)Squad;
	std::cout << "Squad Copy constructor called" << std::endl;
}

Squad::~Squad()
{
	std::cout << "Squad Destructor called" << std::endl;
}

class A {
public:
    A() { cout << "Constructor A" << endl;}
    A(const A &obj) {
        cout << "copy Constructor A" << endl;
    }
};

int main() {
    A a1;
    A a2 = a1;
	Squad S;
	Squad S_copy = S;
}
