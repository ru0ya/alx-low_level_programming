#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 *
 * @filename: file where text is appended
 * @text_content: character values
 *
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
