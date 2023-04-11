#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array and initialize
 * and initialize with a specifif chararcter
 * @size: the size of the memory to be allocated
 * @c: the character set to the array
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	ret = malloc(size * sizeof(c));
	if (ret)
	{
	for (i = 0; i <= size; i++)
	{
		ret[i] = c;
	}
	}
	else
		return ('\0');

return (ret);
}
