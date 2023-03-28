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

	g = strlen(str);
	if (g % 2 == 0)
	{
		for (i = (g / 2); i < g; i++)
		{
		_putchar(str[i]);
		}

		_putchar('\n');
	}
	else
	{
		for (i = (g / 2) + 1; i < g; i++)
		{
		_putchar(str[i]);
		}
		_putchar('\n');
	}
}
