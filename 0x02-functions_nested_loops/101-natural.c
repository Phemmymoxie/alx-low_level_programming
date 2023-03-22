#include <stdio.h>

/**
 * main - check for code
 *
 * Return: Always 0
 */

int main(void)
{
int a;
int result = 0;

for (a = 0; a < 1024; a++)
{
	if (a % 3 == 0 || a % 5 == 0)
	{
		result += a;
	}
}
	printf("%d\n", result);
return (0);
}
