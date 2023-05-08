#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates file and
 * write to it or truncate the file if it exists.
 * @filename: the name of the file
 * @text_content: the content to be written to the file
 * Return: `1` on success and `-1` if it fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file, cl, wrt, res = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*text_content != '\0')
	{
		wrt = write(file, text_content, 1);
		if (wrt == -1)
			return (-1);
		res += wrt;
		text_content++;
	}

	cl = close(file);
	if (cl == -1)
		return (-1);

return (1);
}
