#include <stdio.h>

/**
 * main - This program prints the alphabets in lower case
 * and then print it in uppercase followed with a new line.
 *
 * Return: Always 0
*/

int main(void)
{
	char b;
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);

		if (c == 'z')
		{
		for (b = 'A'; b <= 'Z'; b++)
		{
			putchar(b);
		}
		}
	}
	putchar('\n');

	return (0);
}

