#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int next_t = f1 + f2;

	printf("%ld, %ld, ", f1, f2);

	for (i = (f1 + f2); i <= 98; i++)
	{
	printf("%ld", next_t);
	f1 = f2;
	f2 = next_t;
	next_t = f1 + f2;

	if (i < 98)
	printf(", ");
	}
printf("\n");
return (0);



}
