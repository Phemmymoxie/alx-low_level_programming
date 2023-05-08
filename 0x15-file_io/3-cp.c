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

	else if (code == 0)
	{
		dprintf(2, "Error: Can't close fd %s\n", a);
		exit(100);
	}

	else if (code == 1)
	{
		dprintf(2, "Error: Can't read from file %s\n", a);
		exit(98);
	}

	else if (code == 2)
	{
		dprintf(2, "Error: Can't write to %s\n", a);
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
int main(int argc, char **argv)
{
	int file_from, file_to, file_r, wrt, cl_1, cl_2, v = 0;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handler(1, argv[1]);

	file_r = read(file_from, buff, 1024);
	if (file_r == -1)
		error_handler(1, argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_handler(2, argv[2]);

	while (buff[v] != '\0')
	{
		wrt = write(file_to, &buff[v], 1);
		if (wrt == -1)
			error_handler(2, argv[2]);
		v++;
	}

	cl_1 = close(file_from);
	if (cl_1 == -1)
		error_handler(0, "-1");

	cl_2 = close(file_to);
	if (cl_2 == -1)
		error_handler(0, "-1");

return (0);
}
