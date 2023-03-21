#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of the given integer.
 * @k: the integer passed to the parameter.
 * Return: Always 0.
 */

int print_last_digit(int k)
{
	int last_dig = k % 10;

	if (k < 0)
	last_dig = last_dig * -1;
	_putchar(last_dig + '0');


	return (last_dig);
}
