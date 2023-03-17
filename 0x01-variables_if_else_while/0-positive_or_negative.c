#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function generates a new number for `n` each it's run,
 *
 * and check, if `n` is positive it prints n is positive,
 * if `n` is negative it prints n is negative
 * if `n` is zero it prints n is zero
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);

	else if (n < 0)
	printf("%d is negative\n", n);

	else if (n == 0)
	printf("%d is zero", n);

	return (0);
}
