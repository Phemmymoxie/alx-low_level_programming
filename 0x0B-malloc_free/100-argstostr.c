#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates argument of the main.
 * @ac: the amount of string passed
 * @av: the pointer to an array of the string passed
 * Return: pointero the new string.
 */
char *argstostr(int ac, char **av)
{
	char *done;
	int c1, c2, a1, a2;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c1 = c2 = 0; c2 < ac; c2++)
	{
		if (av[c2] == NULL)
			return (NULL);
		for (a1 = 0; av[c2][a1] != '\0'; a1++)
		{
			c1++;
		}
		c1++;
	}
	done = malloc((c1 + 1) * sizeof(char));
	if (done == NULL)
	{
		free(done);
		return (NULL);
	}
	for (c2 = a1 = a2 = 0; a2 < c1; a1++, a2++)
	{
		if (av[c2][a1] == '\0')
		{
			done[a2] = '\n';
			a2++;
			c2++;
			a1 = 0;
		}
		if (a2 < c1 - 1)
			done[a2] = av[c2][a1];
	}
	done[a2] = '\0';
	return (done);
}
