#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: always return pointer to dest
 */

char *cap_string(char *s)
{
	int g = 0, a;
	int sep_value[] = {32, 9, 10, 44, 59, 46, 33, 34, 40, 41, 12, 123, 125};

	if (s[g] >= 97 && s[g] <= 122)
	{
		s[g] -= 32;
	}

	while (s[g] != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (s[g] == sep_value[a])
			{
				if (s[g + 1] >= 97 && s[g + 1] <= 122)
				{
					s[g + 1] -= 32;
					break;
				}

		a++;	}
		}
	g++;

	}
	return (s);
}
