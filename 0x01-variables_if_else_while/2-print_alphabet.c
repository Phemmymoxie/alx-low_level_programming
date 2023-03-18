#include <stdio.h>

/**
 * main - This code prints all the alphabet in lower case.
 * followed by a new line
 * Return: Always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
