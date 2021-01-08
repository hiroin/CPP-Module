#include <iostream>
#include <string>
#include <string.h>


struct	Data
{
	std::string	s1;
	#pragma pack(4)
	int			i;
	#pragma pack()
	std::string	s2;
};

int genRand(int min, int max)
{
    static int flag;    
    if (flag == 0)
	{
        srand((unsigned int)time(NULL));
        rand();
        flag = 1;
    }
    int ret = min + (int)(rand()*(max - min + 1.0)/(1.0+RAND_MAX));
    return ret;
}

char getRandomCharLower(void)
{
	const char CHARS[] = "abcdefghijklmnopqrstuvwxyz";
	int index = genRand(0, (strlen(CHARS) - 1));
	char c = CHARS[index];
	return c;
}

std::string getRandomCharsLower(int length)
{
	int			i;
	char		c;
	std::string	s;

	i = 0;
	while (i < length)
	{
		s += getRandomCharLower();
		i++;
	}
	return s;
}

Data * deserialize(void * raw)
{
	return reinterpret_cast<Data *>(raw);
}

void * serialize()
{
	Data	*serializeData;

	Data baseData = {getRandomCharsLower(8), genRand(1, 1000), getRandomCharsLower(8)};
	std::cout << "baseData" << std::endl;
	std::cout << " s1 = " << baseData.s1 << std::endl;
	std::cout << " i  = " << baseData.i << std::endl;
	std::cout << " s2 = " << baseData.s2 << std::endl;
	std::cout << std::endl;
	serializeData = new Data();
	*serializeData = baseData;

	return reinterpret_cast<void*>(serializeData);
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