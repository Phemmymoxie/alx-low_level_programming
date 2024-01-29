#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: parameter passed
 * Return: Always 0.
 */

void _puts(char *str)
{
	char *t = str;

	while (*t != '\0')
	{
	_putchar(*t);
	t++;
	}

_putchar('\n');
}
