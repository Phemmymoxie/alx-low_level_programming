#include <stdio.h>
#include "main.h"

/**
 * puts2 - check the code
 * @str: the argument to be displayed
 * Return: Always 0.
 */

void puts2(char *str)
{
	char *ch = str;

	while (*ch != '\0')
	{
		_putchar(*ch);
		ch += 2;
	}
_putchar('\n');
}
