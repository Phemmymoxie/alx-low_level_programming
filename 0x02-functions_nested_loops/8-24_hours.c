#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that prints time starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int j;
	int k;

	for (j = 0; j <= 23; j++)
	{
		for (k = 0; k <= 59; k++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}

}
