#include "main.h"

/**
 * _strspn - A function that returns the lenght of a prefix substring
 * @s: the main string to be checked.
 * @accept: the substring.
 * Return: (lenght of the prefix check)
 */

unsigned int _strspn(char *s, char *accept)
{
	int gb = 0;

	while (*s)
	{
		if (*(s + gb) == *accept)
		{
			break;
		}
	gb++;
	}

return (gb + 1);
}
