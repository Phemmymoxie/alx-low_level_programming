#include "main.h"

/**
 * print_diagonal - prints diagonal with backslash
 * @n: argument passed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int g;
	int spc;

	if (n >  0)

	{
		for (g = 0; g < n; g++)
		{
			for (spc = 0; spc < g ; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		}
	else
	{
	_putchar('\n');
	}
}
