#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - funtion thats duplicates string and allocates memory for it.
 * @str: the string passed to it.
 *
 * Return: the pointer to the duplicate string.
 */
char *_strdup(char *str)
{
	char *dup;
	int h = strlen(str) + 1;
	int j;

	if (*str == '\0')
	{
		return ('\0');
	}

	dup = malloc(h * sizeof(char));

	if (dup)
	{
	for (j = 0; j < h ; j++)
	{
		dup[j] = str[j];
	}
	}
	else
	{
		return ('\0');
	}

return (dup);
}
