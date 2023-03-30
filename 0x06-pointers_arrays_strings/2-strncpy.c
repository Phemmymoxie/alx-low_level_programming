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
	int len;
	int g;

	len = strlen(src);
	g = 0;

	while (src[g] != src[n])
	{
		if (n <= len)
		{
		dest[g] = src[g];
		}
		else
		{
		dest[g] = '\0';
		}
	g++;

	}
	return (dest);
}
