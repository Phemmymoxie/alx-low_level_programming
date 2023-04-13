#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: the size of the memory to be allocated
 * Return: a void pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
	void *bet;

	bet = malloc(b);
	if (bet == NULL)
		exit(98);

	return (bet);
}
