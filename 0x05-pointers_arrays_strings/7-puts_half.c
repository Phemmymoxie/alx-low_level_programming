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
	int n;
	int g;

	g = strlen(str);
	n = (g - 1 / 2);

	for (i = (g / 2); i <= g; i++)
		{
		_putchar(str[i]);
		}
	if (n % 2 != 0)
		{
		_putchar(str[n]);
		_putchar('\n');
		}
	else
		{
		_putchar('\n');
		}
}
