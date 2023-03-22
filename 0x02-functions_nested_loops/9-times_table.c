#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the times table of the numbers from 0 to 9.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;
	int g;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		g = i * j;

		if (g == 0)
		{
		_putchar('0');
		}
		else if (g <= 9)
		{
			_putchar(g + '0');
		}
		else if (g >= 10)
		{
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
		}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
