#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printthe values that are less than 98
 * @n: the argument passed
 * Return: Always 0.
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}

