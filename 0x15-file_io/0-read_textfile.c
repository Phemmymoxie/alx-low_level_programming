#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that read a text file and
 * prints to the POXIS standard output
 * @filename: the pointer holding the name of the text file
 * @letters: the number of letters that should be read and printed
 *
 * Return: the number of character printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, file_r, ret, cl;
	char *buff;

	buff = malloc(letters + 1);

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	file_r = read(file, buff, letters);

	if (file_r == -1)
		return (0);

	ret = write(STDOUT_FILENO, buff, file_r);

	if (ret == -1 || ret != file_r)
		return (0);

	cl = close(file);
	if (cl == -1)
		return (0);
free(buff);
return (file_r);
}
