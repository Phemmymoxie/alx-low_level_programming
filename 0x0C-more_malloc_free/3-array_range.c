#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value integer
 * @max: the maximum value of integer
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int *mimax;
	int val = (max - min) + 1, cnt;

	if (min > max)
		return (NULL);

	mimax = malloc(val * sizeof(int));

	if (mimax == NULL)
		return (NULL);

	for (cnt = 0; cnt < val; cnt++)
	{
		mimax[cnt] = min;
		min++;
	}

	return (mimax);
}
