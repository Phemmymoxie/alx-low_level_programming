#include "main.h"

/**
 * _memcpy - a function that copies bytes from a memory area.
 * @dest: the destination that stores copied data.
 * @src: the source that owns the the copied data.
 * @n: the amount of bytes copied.
 * Return: pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int gem;

	for (gem = 0; gem < n; gem++)
	{
		dest[gem] = src[gem];
	}

	return (dest);
}
