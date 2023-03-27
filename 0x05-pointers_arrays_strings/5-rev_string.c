#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s: string argument passed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int n;
	char ch;
	char *str = s;

	n = strlen(s);

	for (i = 0; i < n / 2; i++)
	{
		ch = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = ch;
	}
}
