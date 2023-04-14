#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - main code
 * @argc: the lenght of the array argv
 * @argv: the pointer to an array of strings
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	long int min, max;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	min = atoi(argv[1]);
	max = atoi(argv[2]);

	if (min > 0 && max > 0)
	{
		printf("%lu\n", min * max);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
return (0);
}

