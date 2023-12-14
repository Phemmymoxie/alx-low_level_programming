#include "main.h"

/**
 * flip_bits - function that calculates the number of
 * flip between two numbers
 * @n: the first integer
 * @m: the second integer
 * Return: the number of flip that occur
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, flip  = 0;

	res = n ^ m;

	while (res)
	{
		flip += (res & 1);

		res = res >> 1;
	}

return (flip);
}
