#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d array
 * @grid: the 2d array to be freed
 * @height: the length of the row of the array
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int cnt;

	if (grid != NULL && height != 0)
	{
		for (cnt = 0; cnt <= height; cnt++)
		{
			free(grid[cnt]);
		}
	free(grid);
	}

}
