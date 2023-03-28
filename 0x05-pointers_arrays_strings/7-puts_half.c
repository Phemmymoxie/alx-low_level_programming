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

		for (i = (g / 2); i < g; i++)
		{
			if (g % 2 == 0)
			{
			_putchar(str[i]);
			}
		
			else
			{
			_putchar(str[i + 1]);
			}
		}

		_putchar('\n');


}
