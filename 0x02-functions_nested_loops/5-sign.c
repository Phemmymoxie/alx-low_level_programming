#include <stdio.h>
#include "main.h"

/**
 * print_sign - check a number and return a value after checked.
 * @n: the integer to be checked
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
