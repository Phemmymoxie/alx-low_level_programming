#include "main.h"

/**
 * _strspn - A function that returns the lenght of a prefix substring
 * @s: the main string to be checked.
 * @accept: the substring.
 * Return: (lenght of the prefix check)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int gb = 0, j;

	while (*s)
	{
		for (j = 0; *accept; j++)
		{
		if (*(s + gb) == accept[j])
			{
				break;
				}
		}
	gb++;
	}

return (j + 1);
}
