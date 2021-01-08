// main.cpp
#include <iostream>
#include <string>
typedef struct Data
{
	std::string s1;
	int n;
	std::string s2;
}				Data;
void *serialization(std::string s1, int num, std::string s2)
{
	void *ret = reinterpret_cast<void*>(new char(72));
	void *tmp;
	std::string *p_s1;
	int *p_num;
	std::string *p_s2;
	p_s1 = reinterpret_cast<std::string*>(ret);
	std::cout << "p_s1  = " << p_s1 << std::endl;
	*p_s1 = s1;
	p_s1++;
	p_num = reinterpret_cast<int*>(p_s1);
	std::cout << "p_num = " << p_num << std::endl;
	*p_num = num;
	p_num++;
	p_s2 = reinterpret_cast<std::string*>(p_num);
	std::cout << "p_s2  = " << p_s2 << std::endl;
	*p_s2 = s2;
	return (ret);
}
Data *deserialization(void *raw)
{
	Data *ret;
	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
int main()
{
	std::cout << "\n\n======================Serialized Raw Data========================\n\n" << std::endl;
	void *p = serialization("testtest", 42, "testtest");
	std::cout << "\n\n======================Deserialized Raw Data========================\n\n" << std::endl;
	Data *data = deserialization(p);
	std::cout << "p_s1  = " << &data->s1 << std::endl;
	std::cout << "p_s1  = " << &data->n << std::endl;
	std::cout << "p_s1  = " << &data->s2 << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
}