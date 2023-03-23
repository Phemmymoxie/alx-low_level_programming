#include <stdio.h>

/**
 *
 *
 *
 */

int main()
{
	int a = 0;
	long int f = 1;
	long int l = 2;
	long int nxt = l + f;
	while (nxt < 4000000)
	{
	l = f;
	f = nxt;
	nxt = l + f;
	if (nxt % 2 == 0)
	{
	a += nxt;
	}
	}
	printf("%d\n", a);
	return (0);
}

