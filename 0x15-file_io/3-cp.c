#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_handler - function thats prints error message
 * @code: a code to track which error message to print
 * @a: a pointer to a string
 * Return: void.
 */
void error_handler(int code, char *a)
{
	if (code < 0 || code > 3)
		return;

	else if (code == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}

	else if (code == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
}

/**
 * main - main code execution
 * @argc: the length of argument passed
 * @argv: a two dimensional array of argument passed to the function
 *
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_r, wrt, cl_1, cl_2, v = 0;
	char buff[3000];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!(argv))
		error_handler(1, argv[1]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handler(1, argv[1]);

	file_r = read(file_from, buff, 3000);
	if (file_r == -1)
		error_handler(1, argv[1]);
	if (!(argv[2]))
		error_handler(2, argv[2]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_r > 0)
	{
	while (buff[v] != '\0')
	{
		wrt = write(file_to, &buff[v], 1);
		if (wrt == -1)
			error_handler(2, argv[2]);
		v++;
	}
	}
	cl_1 = close(file_from), cl_2 = close(file_to);
	if (cl_1 == -1 || cl_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl_1);
		exit(100);
	}
return (0);
}
