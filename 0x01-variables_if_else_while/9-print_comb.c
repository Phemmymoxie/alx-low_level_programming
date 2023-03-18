#include <stdio.h>

/**
 * main - this program prints all possible different combination of numbers
 *
 * Return: Always (0)
*/

int main(void)
{
	 int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
