#include <stdio.h>

/**
 * main - main code with two arguments
 * @argc: the length of element in argv array.
 * @argv: the pointer to an array of string.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int cnt;

	for (cnt = 0; cnt < argc; cnt++)
	{
		printf("%s\n", argv[cnt]);
	}
return (0);
}
