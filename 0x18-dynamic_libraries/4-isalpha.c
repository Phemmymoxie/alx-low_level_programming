#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check for alphabets character
 * @c: argument to be checked.
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
