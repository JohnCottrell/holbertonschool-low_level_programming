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
	int fd, i, bytes_read;

	char buff;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	for (i = 0; i < (int)letters; i++)
	{
		bytes_read = read(fd, &buff, 1);
		if (bytes_read == 0)
			return (i);
		else
			_putchar(buff);
	}

	close (fd);

	return (i);
}
