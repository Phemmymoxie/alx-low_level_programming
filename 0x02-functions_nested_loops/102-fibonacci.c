#include <stdio.h>

/**
 * main - fibonacci numbers below 50.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int t1 = 1;
	long int t2 = 2;
	long int next_term = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= 50; i++)
	{
	printf("%ld", next_term);
	t1 = t2;
	t2 = next_term;
	next_term = t1 + t2;
	if (i < 50)
	printf(", ");
	}
	printf("\n");
	return (0);

}
