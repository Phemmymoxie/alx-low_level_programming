#include "main.h"

/**
 * print_number - printing numbers
 * @n: argument passed
 * Return: Always 0.
 */

void print_number(int n)
{

	unsigned int num = n;

		if (n < 0)
		{
			_putchar('-');
			num *= -1;
		}
		if (num > 9)
		{
		print_number(num / 10);
		}

	_putchar((num % 10) + '0');

}
