#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main code
 * @argc: the length of the array argv
 * @argv: the pointer to an array of string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*cnt)(int, int);
	int x, y;

	x  = atoi(argv[1]);
	y = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	cnt = get_op_func(argv[2]);

	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", cnt(x, y));

return (0);
}
