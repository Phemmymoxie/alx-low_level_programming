#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_int(va_list vab);
void print_char(va_list vab);
void print_float(va_list vab);
void print_string(va_list vab);

/**
 * print_all - a function thas print all format of value
 * passed to it.
 * @format: the arg variable
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	fmt_get str[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
			};
	int cnt = 0, f;
	va_list res;
	char *sep = "";


	va_start(res, format);
	while (format && *(format + cnt))
	{
		f = 0;
		while (f < 4 && *(format + cnt) != *(str[f].fmt))
			f++;

		if (f < 4)
		{
			printf("%s", sep);
			str[f].f(res);
			sep = ", ";
		}
	cnt++;
	}

	printf("\n");

	va_end(res);

}

/**
 * print_int - function that prints only an in type value
 * @vab: the arg variable argument
 *
 * Return: void.
 */
void print_int(va_list vab)
{
	int out;

	out = va_arg(vab, int);

	printf("%d", out);
}

/**
 * print_char - function that prints char type value
 * @vab: the arg varable type argument
 *
 * Return: void.
 */
void print_char(va_list vab)
{
	char out;

	out = va_arg(vab, int);

	printf("%c", out);
}

/**
 * print_float - function that prints a floating value
 * @vab: the arg variable type argument
 *
 * Return: void.
 */
void print_float(va_list vab)
{
	double out;

	out = va_arg(vab, double);
	printf("%f", out);
}

/**
 * print_string - function that print strings
 * @vab: the arg variable type argument
 *
 * Return: void.
 */
void print_string(va_list vab)
{
	char *out;

	if (vab == NULL)
		printf("(nil)");
	out = va_arg(vab, char *);
	printf("%s", out);
}
