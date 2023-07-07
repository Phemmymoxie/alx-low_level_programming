#include "main.h"

/**
 * get_bit - a funtion thats gets the binary at given index
 * @n: the number in decimal
 * @index: the index given
 * Return: the number at that point
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index  >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}


	if ((n & (1 << index))  == 0)
	{
		return (0);
	}

	return (1);
}
