#include "main.h"

/**
 * _memset - a function that fills the memory of pointer with a constant.
 * @s: the pointer that will be manipulated.
 * @b: the constant to be used.
 * @n: the number of byte that will be filled.
 * Return:type char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int gem;

	for (gem = 0; gem < n; gem++)
	{
		*(s + gem) = b;
	}

	return (s);
}
