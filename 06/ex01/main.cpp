#include <iostream>
#include <string>

#pragma pack(4)
struct	Data
{
	std::string	s1;
	int			i;
	std::string	s2;
};
#pragma pack()

Data * deserialize(void * raw)
{
	return reinterpret_cast<Data *>(raw);
}

void * serialize(void)
{
	Data	*serializeData;

	Data baseData = {"abcdefg", 1, "hijklmno"};
	serializeData = new Data();
	*serializeData = baseData;

	return reinterpret_cast<void *>(serializeData);
}

int		main()
{
	Data	*deserializeData;
	
	std::cout << "size of string = " << sizeof(std::string) << std::endl;
	std::cout << "size of int    = " << sizeof(int) << std::endl;

	deserializeData = deserialize(serialize());
	std::cout << "deserializeData" << std::endl;
	std::cout << " s1 = " << deserializeData->s1 << std::endl;
	std::cout << " i  = " << deserializeData->i << std::endl;
	std::cout << " s2 = " << deserializeData->s2 << std::endl;
	std::cout << std::endl;

	std::string *s1 = reinterpret_cast<std::string *>(deserializeData);
	std::cout << "s1 adddress = " << s1 << std::endl;
	std::cout << "s1 value    = " << *s1 << std::endl;
	std::cout << std::endl;

	char		*c;
	int			*i;
	std::string	*s2;
	long		k;
	c = reinterpret_cast<char *>(deserializeData);
	i = reinterpret_cast<int *>(c + sizeof(std::string));
	k = (long)i - (long)s1;
	std::cout << " i adddress = " << i << std::endl;
	std::cout << " i - s1     = " << k << std::endl;
	std::cout << " i value    = " << *i << std::endl;

	std::cout << std::endl;

	s2 = reinterpret_cast<std::string *>(c + sizeof(std::string) + sizeof(int));
	k = (long)s2 - (long)i;
	std::cout << "s2 adddress = " << s2 << std::endl;
	std::cout << "s2 - i      = " << k << std::endl;
	std::cout << "s2 value    = " << *s2 << std::endl;
	std::cout << std::endl;

	// s2 = reinterpret_cast<std::string *>(c + sizeof(std::string) + 8);
	// k = (long)s2 - (long)i;
	// std::cout << "s2 adddress = " << s2 << std::endl;
	// std::cout << "s2 - i      = " << k << std::endl;
	// std::cout << "s2 value    = " << *s2 << std::endl;


	delete deserializeData;
}