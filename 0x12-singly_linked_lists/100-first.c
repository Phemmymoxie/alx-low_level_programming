#include "lists.h"
#include <stdio.h>

void print_b4_main(void) __attribute__ ((constructor));

/**
 * print_b4_main - a function that executes before the main function
 * Return: void.
 */
void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

