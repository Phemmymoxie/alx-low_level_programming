#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - main code execution
 * @argc: the length of argument passed
 * @argv: a two dimensional array of argument passed to the function
 *
 * Return: Always (0).
 */
int main(int argc, char **argv)
{
	int file_from, file_to, file_r, wrt, cl_1, cl_2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_r = read(file_from, buff, 1024);

	if (file_from == -1 || file_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wrt = dprintf(file_to, "%s", buff);

	if (file_to == -1 || wrt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cl_1 = close(file_from);
	if (cl_1 == -1)
	{
		dprintf(2, "Can't close fd %d\n", cl_1);
		exit(100);
	}
	cl_2 = close(file_to);
	if (cl_2 == -1)
	{
		dprintf(2, "Can't close fd %d\n", cl_1);
		exit(100);
	}
return (0);
}
