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
		for(c = '0'; c <= '9'; c++)
		{
			for (d = '0'; d <= '0'; d++)
			{
				if (b != c && c != d)
				{
				putchar(b);
				putchar(c);
				putchar(d);
				putchar(',');
				putchar(' ');
				}
			}

		}
	}
	return (0);
}
