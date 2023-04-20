#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * that are passed in its argument with separators
 * @separator: the pointer to the separator string
 * @n: the length of the numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num, sep;
	unsigned int cnt;
	int num_do;

	va_start(num, n);

	for (cnt = 0; cnt < n; cnt++)
	{
		num_do = va_arg(num, unsigned int);
		printf("%d", num_do);
		if (cnt < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
	va_end(sep);

}
