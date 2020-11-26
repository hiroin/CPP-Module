#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	s;
	int			i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			s = argv[i++];
			transform(s.begin(), s.end(), s.begin(), toupper);
			std::cout << s;
		}
		std::cout << std::endl;
	}
	return (0);
}