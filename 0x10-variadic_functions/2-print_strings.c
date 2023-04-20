#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * arguments passed to its parameter
 * @separator: the string that separates the output
 * @n: the length of the string argument passed
 * to the function
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt;
	va_list str;
	char *set_str;

	va_start(str, n);

	for (cnt = 0; cnt < n; cnt++)
	{
		set_str = va_arg(str, char *);
		if (set_str == NULL)
			printf("(nil)");
		else
			printf("%s", set_str);

		if (cnt < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
