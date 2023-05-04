#include "main.h"

/**
 * print_binary - function that prints the binary
 * of a decimal input using bitwise
 * @n: the decimal value passed in as argument
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int res;
	int zero_flag;

	res  = 2147483648;
	zero_flag = 1;

	while (res > 0)
	{
		if (n & res)
		{
			zero_flag = 0;
			_putchar('1');
		}
		else if (!zero_flag)
		{
			_putchar('0');
		}
		res = res >> 1;
	}
	if (zero_flag)
	{
		_putchar('0');
	}
}

