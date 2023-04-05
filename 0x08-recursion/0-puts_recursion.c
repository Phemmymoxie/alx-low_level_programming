#include "main.h"

/**
 * _puts_recursion - prints out the string using recursion.
 * @s: the string to be printed.
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + 1);
}
