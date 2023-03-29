#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 * @str: argument to eb checked
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int g;
	int h;

	h = 0;
	g = strlen(str);
	if (g % 2 != 0)
	{
		h += 1;
	}

	for (i = ((g + h) / 2); i < g; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
