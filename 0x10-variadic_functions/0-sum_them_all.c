#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a funtion that sum up all
 * the value in its parameter
 * @n: the length of values that will be passed
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int cnt;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (cnt = 0; cnt < n; cnt++)
	{
		sum += va_arg(arg, unsigned int);
	}

	va_end(arg);

	return (sum);
}
