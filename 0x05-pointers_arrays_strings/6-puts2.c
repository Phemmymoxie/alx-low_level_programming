#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - check the code
 * @str: the argument to be displayed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int n;

	n = strlen(str);
	for (i = 0; i < n; i++) 
	{
		if (i % 2 == 0)
		
		_putchar(str[i]);
	}
_putchar('\n');
}
