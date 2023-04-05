#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	if (*haystack == '\0' || *needle == '\0')
		{
		return ('\0');
		}
	else
	{
		while (*haystack)
		{
			while (*needle)
			{
				if (needle == haystack)
					return (haystack);
			}
		}
	}
	return ('\0');
}
