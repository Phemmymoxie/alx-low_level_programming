#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that creates a pointer to a 2d array
 * @width: the length of the column in the array
 * @height: the lenght of the row in the array
 * Return: the the pointer to the 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **arry;
	int j, k;
	int total = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);

	arry = malloc(total * sizeof(int *));

	if (arry == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		arry[j] = malloc(width * sizeof(int));

		if (arry[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(arry[k]);
			free(arry);
			return (NULL);
		}
	}


		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
			{
				arry[j][k] = 0;
			}
		}


return (arry);
}
