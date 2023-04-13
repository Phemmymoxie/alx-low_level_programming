#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - a function that works like the built in calloc
 * @nmemb: the number of the array element
 * @size: the size in bytes of the array element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int cnt, g;

	g = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(g);

	if (call == NULL)
		return (NULL);

	for (cnt = 0; cnt < (g); cnt++)
	{
		call[cnt] = 0;
	}

	return (call);
}
