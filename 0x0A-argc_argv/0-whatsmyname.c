#include <stdio.h>
/**
 * main - check for argv and argc.
 * @argc: the argument that holds the length of argv array.
 * @argv: the pointer of the array.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

return (0);
}
