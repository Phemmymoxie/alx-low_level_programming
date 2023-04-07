#include <stdio.h>
#include <stdlib.h>

/**
 * main - main code to be executed with two arguments
 * @argc: the lenght of the argv array
 * @argv: the pointer to an array of strings.
 * Return: return an int.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
