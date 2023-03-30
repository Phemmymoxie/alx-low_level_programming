#include "main.h"
#include <stdio.h>

char *rot13(char *ch)
{
	char *nig = ch;
	int i;

	while (*ch)
	{
		for (i = 0; i < 13; i++)
		{
			if ((*ch >= 65 && *ch <= 77) || (*ch >= 97 &&  *ch <= 109))
			{
				*ch += 13;
			}

			else if ((*ch >= 78 && *ch <= 90) || (*ch >= 110 && *ch <= 122))
			{
				*ch -= 13;
			}
		}
	ch++;
	}

	return (nig);
}
