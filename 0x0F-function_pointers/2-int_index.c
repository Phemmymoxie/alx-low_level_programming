#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a funtion that compares integer
 * @array: a pointer to an array of element
 * @size: the size of the array
 * @cmp: the function pointer that compares an integer
 * Return: returns the index number that the compare was found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cnt;

	if (size <= 0)
		return (-1);

	for (cnt = 0; cnt < size; cnt++)
	{
		if (cmp(array[cnt]))
			return (cnt);
	}

	return (-1);
}
