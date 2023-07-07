#include "main.h"

/**
 * get_endianness - function that checks endianess
 *
 * Return: Always (0)
 */
int get_endianness(void)
{
	int res;
	int *temp;

	res = 1;
	temp = &res;


	if (*temp == 1)
		return  (1);

return (0);

}
