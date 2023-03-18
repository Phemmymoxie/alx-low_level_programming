#include <stdio.h>

/**
 * main - This program print all possible different combinations
 * of three digits
 *
 * Return: Always 0
*/

int main(void)
{
int c;
int b;
int d;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = b + 1; c <= '9'; c++)
		{
			for (d = c + 1; d <= '9'; d++)
			{
				if (b != c)
				{
				putchar(b);
				putchar(c);
				putchar(d);
				if (b < '7' || c < '8' || d < '9')
				{
				putchar(',');
				putchar(' ');
				}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
