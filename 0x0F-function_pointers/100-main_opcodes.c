#include <stdlib.h>
#include <stdio.h>

/**
 * ops_print - function that prints opscode in hexadecimal
 * @c: the pointer to a string
 * @n: the number of opscode to be printed
 * Return: void.
 */
void ops_print(char *c, int n)
{
	int f = 0;

	while (f < n)
	{
		printf("%.2hhx", c[f]);

		if (f < n - 1)
			printf(" ");
	f++;
	}

	printf("\n");
}

/**
 * main - the main code
 * @argc: an array size
 * @argv: a pointer to an array of string arguments
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int cnt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	cnt = atoi(argv[1]);

	if (cnt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ops_print((char *)&main, cnt);

	return (0);
}
