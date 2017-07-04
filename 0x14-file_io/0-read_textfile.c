#include "holberton.h"
#include <limits.h>

/**
 * read_textfile - reads text file, prints it to POSIX standard output
 * @filename: name of file
 * @letters: number of letters that should be read and printed
 * Return: 0 if filename is  NULL, can't be opened or read, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;

	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1 || fd == 0)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	bytes_read = read(fd, buff, letters);

	bytes_written = write(1, buff, bytes_read);

	close(fd);

	if (bytes_written < bytes_read)
		return (0);

	return (bytes_read);
}
