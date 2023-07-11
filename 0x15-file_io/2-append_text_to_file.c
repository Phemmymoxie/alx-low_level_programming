#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - A function that appends text to a file
 * @filename: the pointer to the name of the file
 * @text_content: the text to be appended to the file
 *
 * Return: `1` on success and `-1` if it failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrt;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*text_content != '\0')
	{
		wrt = write(file, text_content, 1);

		if (wrt == -1)
			return (-1);
		text_content++;
	}

	close(file);
	return (1);
}

