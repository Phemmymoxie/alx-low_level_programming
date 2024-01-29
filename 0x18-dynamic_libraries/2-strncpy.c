#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination of the copied strings
 * @src: the buffer that hols the string to be copied
 * @n: the number of the string to be copy from src.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	g = 0;

	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}

	return (dest);
}
