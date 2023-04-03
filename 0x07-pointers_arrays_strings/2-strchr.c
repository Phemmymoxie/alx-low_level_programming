#include <stddef.h>
#include "main.h"
/**
 * _strchr - A function that checks a string and return a pointer.
 * where there is an occurrence of a character
 * @s: The pointer to a string to be checked.
 * @c: The character to be compared with the character of the string.
 * Return: return a pointer or return null
 * if there is no occurrence of the string.
 */

char *_strchr(char *s, char c)
{
	unsigned int gem = 0;

	while (s[gem] != '\0')
	{
		if (s[gem] == c && s[gem + 1] != '\0')
		{
			return (s + gem);
		}

		gem++;
	}

	return (NULL);
}
