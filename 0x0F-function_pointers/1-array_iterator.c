#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a funtion thats a function in its argument
 * on each element of the array given to it.
 * @array: a pointer to an array of integers
 * @size: the size in integer of the array
 * @action: a funtion pointer thats will be executed
 * on each element in the array
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cnt;

	if (!(action))
		return;
	for (cnt = 0; cnt < size; cnt++)
	{
		action(array[cnt]);
	}
}
