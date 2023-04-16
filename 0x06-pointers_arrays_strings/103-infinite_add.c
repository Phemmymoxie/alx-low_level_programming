#include <stdio.h>
#include "main.h"
/**
 * infinite_add - function that adds two numbers in a buffer
 * and store the result in a buffer.
 * @n1: the first buffer
 * @n2: the second buffer
 * @r: the buffer that will store the result
 * @size_r: the size of the buffer `r`
 * Return: the pointer to the result buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int vm = 0, cm = 0, add = 0, sum = 0, lag, exc, exc2;

	while (*(n1 + vm) != '\0')
		vm++;
	while (*(n2 + cm) != '\0')
		cm++;
	if (vm > cm)
		lag = vm;
	else
		lag = cm;

	if (size_r <= lag + 1)
		return (0);

	r[lag + 1] = '\0';
	cm--, vm--;
	exc  = *(n1 + vm) - 48, exc2 = *(n2 + cm) - 48;
	while (lag >= 0)
	{
		sum = exc + exc2 + add;
		if (sum >= 10)
			add = sum / 10;
		else
			add = 0;
		if (sum >= 0)
			*(r + lag) = (sum % 10) + 48;
		else
			*(r + lag) = '0';
		if (vm > 0)
			vm--, exc = *(n1 + vm) - 48;
		else
			exc = 0;
		if (cm > 0)
			cm--, exc2 = *(n2 + cm) - 48;
		else
			exc2 = 0;
		lag--;
	}
	return (r);
}
