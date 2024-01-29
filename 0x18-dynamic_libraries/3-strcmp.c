#include "main.h"

/**
 * _strcmp - check the code
 * @s1: the first charater to be compared
 * @s2: the second charater to be compared
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int g;
	int diff;

	g = 0;
	diff = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
		diff = s1[g] - s2[g];
		return (diff);
		}
		g++;
	}
return (0);
}
