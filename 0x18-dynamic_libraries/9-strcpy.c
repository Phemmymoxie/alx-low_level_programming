#include "main.h"
#include <string.h>

/**
 * _strcpy - check the code
 * @dest: the pointer that holds the copy
 * @src: the pointer tht holds the original data
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int c;
	int n;
	char ch;

	n = strlen(src);

	for (c = 0; c < n; c++)
	{
		ch = src[c];
		dest[c] = ch;
	}
	dest[n] = '\0';

return (dest);

}
