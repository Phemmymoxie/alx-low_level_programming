#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	ret = malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
	{
		ret[i] = c;
	}

return (ret);
}
