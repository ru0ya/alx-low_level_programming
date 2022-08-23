#include "main.h"

/**
 *create_file - creates a file and truncates it
 *@filename: text file
 *@text_content: character values
 *Return: 1 on success -1 if it fails
 */


int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);

	}
	write(fd, text_content, sizeof(text_content));
		close(fd);
		return (1);
}
