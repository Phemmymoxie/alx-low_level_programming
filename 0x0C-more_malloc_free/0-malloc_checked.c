#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	if (b == 0)
		exit(98);

	return (malloc(b * sizeof(unsigned int)));
}
