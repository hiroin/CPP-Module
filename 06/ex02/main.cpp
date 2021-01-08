#include "Operation.hpp"

int		main()
{
	Operation	operation;
	Base*		base;

	base = operation.generate();
	operation.identify_from_pointer(base);
	operation.identify_from_reference(*base);

	delete base;
	return 0;
}