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
	char *temp;

	if (*s == '\0' || *accept == '\0')
		{
		return ('\0');
		}
	else
	{

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}
		temp++;
		}
	s++;
	}
	}
	return ('\0');
}
