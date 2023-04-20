#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

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
	
