#include "main.h"
#include <stdbool.h>
#include <string.h>
/**
 * _strspn - A function that returns the lenght of a prefix substring
 * @s: the main string to be checked.
 * @accept: the substring.
 * Return: (lenght of the prefix check)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, gb = 0, len1 = 0, len = 0;

	len1 = strlen(accept);

	while (*s)
	{
		bool f_match = false;

		for (j = 0; j < len1; j++)
		{
		if (accept[j] == *(s + gb))
		{
			f_match = true;
			break;
		}
		}

		if (!f_match)
			{
			break;
			}
		else
			{
			len++;
			}
	gb++;
	}

return (len);
}
