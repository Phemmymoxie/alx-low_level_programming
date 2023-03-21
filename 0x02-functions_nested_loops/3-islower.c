#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase alphabet.
 * @c: the integer argument pass in.
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
