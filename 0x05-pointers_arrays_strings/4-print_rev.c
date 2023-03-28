#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s: the string argument to be checked
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int n;
	int i;
	char ch;
	char str[1000];

	n = strlen(s);
	strcpy(str, s);

	for (i = 0; i < n / 2; i++)
	{
		ch = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = ch;
	}
	printf("%s\n", str);
}
