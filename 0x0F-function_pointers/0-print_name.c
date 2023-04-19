#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function thats prints a name
 * @name: the name to be printed
 * @f: a funtion pointer that prints the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (!(f))
		return;
	f(name);
}
