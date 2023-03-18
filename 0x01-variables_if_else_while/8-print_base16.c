#include <stdio.h>

/**
 * main - A program thats print the numbers of the base 16 in lowercase
 *
 * Return: Always 0
*/

int main(void)
{
	char c;
	char b;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c == '9')
		{
			for (b = 'a'; b <= 'f'; b++)
			{
			putchar(b);
			}
		}
	}
	putchar('\n');

	return (0);
}
