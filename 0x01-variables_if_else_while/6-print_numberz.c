#include <stdio.h>

/**
 * main - This program prints integers,
 * without the use of printf and puts().
 * it uses putchar
 *
 * Return: Always 0
*/

int main(void)
{
	int x = 0;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}

	putchar('\n');

	return (0);
}
