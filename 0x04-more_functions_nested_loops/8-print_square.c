#include "main.h"

/**
 * print_square - check the code
 * @size: the size of the square.
 * Return: Always 0.
 */

void print_square(int size)
{
	int j;
	int g;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
		for (g = 0; g < size; g++)
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
