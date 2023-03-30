#include "main.h"
#include <string.h>

/**
 * string_toupper - check the code
 * @ch: the argument passed to the function
 * Return: Always 0.
 */

char *string_toupper(char *ch)
{
	int c;

	for (c = 0; ch[c] != '\0'; c++)
	{
		if (ch[c] >= 'a' && ch[c] <= 'z')
		{
			ch[c] -= 32;
		}
	}
	return (ch);
}
