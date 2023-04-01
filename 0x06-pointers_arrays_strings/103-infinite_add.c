#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int gt = 0;
	

		while (*n1 != '\0' && *n2 != '\0')
		{
			r[gt] = n2[gt] + n1[gt];
			gt++;
		}
		return (r);
	
	else
		return (0);
}
