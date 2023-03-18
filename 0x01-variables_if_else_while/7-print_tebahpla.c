#include <stdio.h>

/**
 * main - string reversal function
 * This program prints lowercase alphabet in reverse form.
 *
 * Return: Always 0
*/

int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);

}
