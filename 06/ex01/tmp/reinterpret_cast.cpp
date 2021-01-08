#include <iostream>
#include <string>

int		main()
{
	void *c1 = reinterpret_cast<void*>(new char(1));
	char ca = 'a';
	char *p_c = reinterpret_cast<char*>(c1);
	*p_c = ca;
	std::cout << p_c << std::endl;

	void *c4 = reinterpret_cast<void*>(new char(4));
	int i1 = 1;
	int *p_i = reinterpret_cast<int*>(c4);
	*p_i = i1;
	std::cout << *p_i << std::endl;

	void *c32 = reinterpret_cast<void*>(new char(32));
	std::string s8 = "abcdefgh";
	std::string *p_s = reinterpret_cast<std::string*>(c32);
	*p_s = s8; // ← Linuxだとここでセグフォする
	std::cout << *p_s << std::endl;
	return (0);
}