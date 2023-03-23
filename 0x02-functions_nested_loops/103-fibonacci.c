#include <stdio.h>

/**
 * main - main function to be executed
 *
 * Return: Always (0)
 */

int main(void)
{
	int a = 0;
	long int f = 1;
	long int l = f;
	long int nxt = l + f;

	while (nxt < 4000000)
	{
	if (nxt % 2 == 0)
	{
	a += nxt;
	}
	l = f;
	f = nxt;
	nxt = l + f;
	}
	printf("%d\n", a);
	return (0);
}

