#include "main.h"

/**
 * _strpbrk - A function that locates the first occurrence in a string
 * @s: the pointer to a string to be checked
 * @accept: the pointer to a string that is check against.
 * Return: s or NULL if no occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int len, g, gb;

	g = 0;
	len = 0;
	gb = 0;
	while (accept[len])
	{
		len++;
	}
	while (*s)
	{
		for (g = 0; g < len; g++)
		{
			if (*(s + gb) == accept[g])
			{
				return (s + gb);
			}
		}
	gb++;
	}
	return ('\0');
}
