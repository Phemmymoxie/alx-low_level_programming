#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int ch;

	for (i = 0; i <= n / 2; i++)
	{
		ch = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = ch;
	}
}
