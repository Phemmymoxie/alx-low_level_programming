#include <stdio.h>

/**
 * main - A function that print combination of numbers from 0 -9
 * in ascending order without reapeted combination.
 *
 * Return: Always 0
*/

int main(void)
{
	int c;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (c != b && c >= b)
			{
			putchar(b);
			putchar(c);
			if (b < '8' || c < '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
