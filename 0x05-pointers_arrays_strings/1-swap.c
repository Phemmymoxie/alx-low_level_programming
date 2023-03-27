#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first pointer argument
 * @b: second pointer argument
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int done;

	done = *a;
	*a = *b;
	*b = done;

}
