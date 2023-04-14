#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocate memory
 * @ptr: pointer to the memory
 * @old_size: the old size of the memory
 * @new_size: the new size of the memory allocated
 * Return: the pointer ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
