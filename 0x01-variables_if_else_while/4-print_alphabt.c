#include <stdio.h>

/**
 * main - this program prints the all the alphabet except two letters
 * the excluded letters are (e, q).
 *
 * Return: Always 0
*/

int main(void)
{
	int g;

	for (g = 'a'; g <= 'z'; g++)
	{
		if (g != 'e' && g != 'q')
		{
		putchar(g);
		}
	}
	putchar('\n');
	return (0);
}
