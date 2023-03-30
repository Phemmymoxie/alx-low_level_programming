#include "main.h"

/**
 * print_number - printing numbers
 * @n: argument passed
 * Return: Always 0.
 */

void print_number(int n)
{

	int num = n;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num > 9)
		{
		print_number(num / 10);
		}

	_putchar((num % 10) + '0');

}
