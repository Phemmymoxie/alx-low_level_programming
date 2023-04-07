#include <stdio.h>
#include <stdlib.h>

/**
 * main - main code for suming up integers
 * @argc: the lenght of the array argv.
 * @argv: the pointer to the array of string.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int cnt;
	int sum = 0;

	for (cnt = 1; cnt < argc; cnt++)
	{
		if (atoi(argv[cnt]))
		{
			sum += atoi(argv[cnt]);
		}
		else
		{
			sum = 0;
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
