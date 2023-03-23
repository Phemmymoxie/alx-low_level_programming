#include <stdio.h>

/**
 * main - fibonacci numbers below 50.
 *
 * Return: Always 0
 */

 int main(void)
 {
 
	int i;
	int t1 = 1;
	int t2 = 2;
	int next_term = t1 + t2;

	printf("%d, %d, ", t1, t2);

	for (i = 3; i < 50; i++)
	{
	printf("%d, ", next_term);
	t1 = t2;
	t2 = next_term;
	next_term = t1 + t2;
	}
	return (0);

}
