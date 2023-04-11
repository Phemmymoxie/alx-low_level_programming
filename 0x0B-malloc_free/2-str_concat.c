#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string argument
 * @s2: the second string argument
 *
 * Return: the pointer to the new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int cnt = 0, ctn = 0, g, i, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[cnt] != '\0')
	{
		cnt++;
	}

	while (s2[ctn] != '\0')
	{
		ctn++;
	}

	cont = malloc(cnt + ctn + 1);

	if (cont == NULL)
		return (NULL);

	for (i = 0; i < cnt; i++)
		cont[i] = s1[i];

	limit = ctn;
	for (g = 0; g <= limit; g++, i++)
		cont[i] = s2[g];

return (cont);
}
