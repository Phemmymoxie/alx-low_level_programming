#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value.
 * @a: integer passed to the function.
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a > 0)
		return (a);

	else
		return (a * -1);

}
