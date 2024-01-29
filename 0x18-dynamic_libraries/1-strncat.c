#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates a strings
 * @dest: destination argument
 * @src: the source argument.
 * @n: the argument that the number of bytes in the src.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int g;
	int h;

	g = 0;
	h = 0;

	while (dest[g] != '\0')
	{
		g++;
	}

	while (src[h] != src[n])
	{
		dest[g] = src[h];
		g++;
		h++;
	}
	return (dest);
}
