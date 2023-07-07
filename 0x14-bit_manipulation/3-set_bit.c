#include "main.h"

/**
 * set_bit - a function that set a bit at a
 * given specific index
 * @n: an unsigned long int integer
 * @index: the index to be set at
 * Return: 1 on sucess and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int res;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	res = (unsigned long int)(1);

	*n |= (res << index);

return (res);
}

