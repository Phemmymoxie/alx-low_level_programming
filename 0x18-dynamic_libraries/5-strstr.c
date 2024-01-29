#include "main.h"

/**
 * _strstr - the function finds the occurence of a word in a string
 * and return a pointer where it is found.
 * @haystack: the pointer to the main string.
 * @needle: the pointer of the substring.
 * Return: a pointer of char.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	if (*haystack == '\0' || *needle == '\0')
		{
		return (NULL);
		}
	else
	{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			s1 = haystack;
			s2 = needle;

			while (*s1 && *s2)
			{
				if (*s1 != *s2)
				{
					break;
				}
			s1++;
			s2++;
			}

			if (*s2 == '\0')
			{
				return (haystack);
			}
		}
	haystack++;
	}
	}
	return (NULL);
}
