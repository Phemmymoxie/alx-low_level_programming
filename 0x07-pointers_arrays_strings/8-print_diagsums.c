#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the diagonal
 * sum of pointer to an array
 * @a: the pointer of an array
 * @size: the size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int gem;
	int sum1 = 0;
	int sum2 = 0;

	for (gem = 0; gem < size; gem++)
	{
		sum1 += a[gem * size + gem];
		sum2 += a[(gem + 1) * size - (gem + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
