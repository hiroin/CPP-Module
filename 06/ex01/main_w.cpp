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

int	main()
{
	Data baseData;

	return 0;
}