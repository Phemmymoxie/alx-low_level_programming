#include "main.h"
/**
 * print_times_table - prints the times table of the numbers from 0 to 9.
 * @n: the argument passed
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j;

if (n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int prod = j * i;

if (j == 0)
{
_putchar('0');
}
else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else if (prod <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
else if (prod < 199)
{
	_putchar(',');
	_putchar(' ');
	_putchar(prod / 100 + '0');
	_putchar((prod / 10) % 10 + '0');
	_putchar((prod % 10) % 10 + '0');
}	}
_putchar('\n');
}	}	}
