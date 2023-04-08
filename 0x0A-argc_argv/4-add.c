#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main code for suming up integers
 * @argc: the lenght of the array argv.
 * @argv: the pointer to the array of string.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	unsigned int len, cnt, sum = 0;

	if (argc < 3)
		{
		printf("%d\n", 0);
		return (0);
		}
	len = argc;

	for (cnt = 1; cnt < len; cnt++)
	{
		if (atoi(argv[cnt]))
		{
			sum += atoi(argv[cnt]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
