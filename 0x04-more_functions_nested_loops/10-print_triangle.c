#include "main.h"

/**
 * print_triangle - check the code
 * @size: the size of the hieigt of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
		{
			_putchar(' ');
		}
		for (c = 0; c < a + 1; c++)
		{
			_putchar('#');
		}
	_putchar('\n');

	}
	}
	else
	{
		_putchar('\n');
	}
}

