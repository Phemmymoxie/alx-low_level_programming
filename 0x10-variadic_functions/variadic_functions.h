#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdarg.h>

/**
 * struct fmt - struct object
 *
 * @fmt: first member of the struct
 * @f: the second member of the struct
 */
typedef struct fmt
{
	char *fmt;
	void (*f)(va_list format);
} fmt_get;


int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

int _putchar(char c);

#endif
