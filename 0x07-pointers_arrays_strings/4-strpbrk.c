#include "main.h"
#include <stdbool.h>
#include <string.h>
/**
 * _strpbrk - A function that locates the first occurrence in a string
 * @s: the pointer to a string to be checked
 * @accept: the pointer to a string that is check against.
 * Return: s or NULL if no occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int len, g, gb;
	char *temp;

	g = 0;
	gb = 0;

	if (*s == '\0' || *accept == '\0')
		{
		return ('\0');
		}
	else
	{
	len = strlen(accept);

	while (*s)
	{
	temp = accept;
		for (g = 0; g < len; g++)
		{
			if (*(s + gb) == temp[g])
			{
				return (s + gb);
			}
		}
	gb++;
	}
	}
	return ('\0');
}
