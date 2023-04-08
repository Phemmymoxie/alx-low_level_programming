#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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



	if (argc < 3)
		{
		printf("%d\n", 0);
		return (0);
		}


	for (cnt = 1; cnt < argc; cnt++)
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

	return (sum);
}
