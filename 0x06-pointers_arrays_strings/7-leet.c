#include "main.h"
#include <stdio.h>

/**
 * leet - encode string to 1337
 * @ch: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *ch)
{
	char *s = ch;
	char let[] = {'a', 'e', 'o', 't', 'l'};
	int enc[] = {4, 3, 0, 7, 1};
	int i;

	while (*ch)
	{
		for (i = 0; i < 5; i++)
		{
		if (*ch == let[i] || *ch == let[i] - 32)
			{
			*ch = enc[i] + '0';
			}
		}
	ch++;
	}
return (s);
}
