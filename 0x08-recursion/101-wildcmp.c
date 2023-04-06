#include "main.h"

/**
 * wildcmp - a function thats compare two strings,
 * with its second strings could contain wild charater.
 * @s1: the first string with rarely strings or empty char.
 * @s2: the second string to be compared with.
 * Return: return 1 if true and zreo if false.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
		if (*s2 == '*')
		{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		}

	return (0);
}
