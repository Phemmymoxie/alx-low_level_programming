#include "main.h"

/**
 * clear_bit - function that clears a bit at a
 * given index position
 * @n: an unsigned long int integer
 * @index: the given index position
 * Return: 1 if succeed and 0 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	res = ~((unsigned long int)(1) << index);

	*n &= res;

	return (1);
}
