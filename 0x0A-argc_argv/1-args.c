#include <stdio.h>

/**
 * main - check the the code and return int
 * @argc: number of elementin argv array.
 * @argv: the pointer to an array of strings.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
return (0);
}
