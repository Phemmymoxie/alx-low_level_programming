#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string to be concatenated.
 * @s2: the second string to be concatenated.
 * @n: the amount in bytes that will be taken from the second string
 * Return: the pointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int cnt = 0, brk = 0, cat, hot;

	cat = strlen(s1) + 1;
	hot = strlen(s2);

	if (n >= hot)
		n = hot;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = malloc(n + cat);

	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[cnt] != '\0')
	{
		concat[cnt] = s1[cnt];
		cnt++;
	}
	while (s2[brk] != '\0')
	{
		if (brk < n)
		{
			concat[cnt] = s2[brk];
			cnt++;
		}
		brk++;
	}
	concat[cnt + 1] = '\0';
return (concat);
}
