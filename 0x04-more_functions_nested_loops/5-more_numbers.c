#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int g;
	int h;

	for (g = 0; g <= 9; g++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
			{
				_putchar(h / 10 + '0');
			}
			_putchar(h % 10 + '0');

		}
	_putchar('\n');
	}
}
