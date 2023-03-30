#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string
 * @ch: input variables
 * Return: always return dest
 */

char *rot13(char *ch)
{
	char *nig = ch;
	int i;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ch)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*ch == a[i])
			{
				*ch = b[i];
				break;
			}
		}
	ch++;
	}

	return (nig);
}
