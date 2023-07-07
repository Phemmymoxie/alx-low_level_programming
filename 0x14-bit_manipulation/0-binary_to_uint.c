#include "main.h"
#include <string.h>

/**
 * binary_to_uint - a function that converts binary
 * to decimal using bitwise operator
 * @b: the pointer to the binary string
 *
 * Return: the decimal on success and 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum_all = 0;
	int cnt = 0;

	if (!b)
		return (0);

	while (b[cnt] != '\0')
	{
		if (b[cnt] != '1' && b[cnt] != '0')
			return (0);

		sum_all = ((sum_all << 1) | (b[cnt] - '0'));
		cnt++;

	}
return (sum_all);
}

