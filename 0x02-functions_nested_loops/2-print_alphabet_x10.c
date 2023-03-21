#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets from a to z in ten places
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int h, g;

	for (h = 0; h < 10; h++)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
		_putchar(g);
		}
	_putchar('\n');
	}
}
