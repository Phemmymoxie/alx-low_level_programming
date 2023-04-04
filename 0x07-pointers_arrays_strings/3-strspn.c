#include "main.h"

/**
 * _strspn - A function that returns the lenght of a prefix substring
 * @s: the main string to be checked.
 * @accept: the substring.
 * Return: (lenght of the prefix check)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, gb = 0, len1 = 0, len = 0;

	while (accept[len1])
	{
		len1++;
	}

	while (*s)
	{
		for (j = 0; j < len1; j++)
		{
		if (*(s + gb) == accept[j])
		{
			len++;
			j = len1;
		}
		else
		{
			if (j == len1 - 1)
			goto exit;
		}
		}
	gb++;
	}

exit: return (len);
}
