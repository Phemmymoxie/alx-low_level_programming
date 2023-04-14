#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	
	if (new_size == old_size)
		return (ptr);
	
	if (ptr == NULL)	
		ptr = malloc(new_size);
		
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
