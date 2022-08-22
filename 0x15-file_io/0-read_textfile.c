#include "main.h"

/**
 * read_textfile - reads text file and prints it
 *
 *@filename: text file
 *@letters: parameters to be printed
 * Return: text file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _read, _write;
	char *buffer = NULL;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	_read = read(fd, buffer, letters);
		if (_read == -1)
			return (0);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
		return (0);
	close(fd);
	return (_read);
}
