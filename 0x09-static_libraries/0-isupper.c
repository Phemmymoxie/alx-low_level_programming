#include "main.h"

/**
 * _isupper - checks for an uppercase letter.
 * @c: the argument to be checked.
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	return (0);
}
