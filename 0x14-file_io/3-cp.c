#include "holberton.h"

/**
 * cant_read - prints error message upon failure to read
 * @str: filename
 * Return: void
 */
void cant_read(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * cant_write - prints error message when n fails to create or to write to file
 * @str: name of file
 * Return: void
 */
void cant_write(char *str)
{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
}

/**
 * cant_close_fd - prints error message upon failure to close descriptor
 * @fdv: file descriptor value
 * Return: void
 */
void cant_close_fd(int fdv)
{
	if (fdv == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fdv);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 upon success
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto, bytes_read, bytes_written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
		cant_read(argv[1]);

	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
	{
		cant_write(argv[2]);
	}
	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(fdfrom, buf, 1024);
		if (bytes_read == -1)
			cant_read(argv[1]);
		bytes_written = write(fdto, buf, bytes_read);
		if (bytes_written != bytes_read)
			cant_write(argv[2]);
	}
	if (close(fdto) == -1)
		cant_close_fd(fdto);
	if (close(fdfrom) == -1)
		cant_close_fd(fdfrom);
	return (0);
}
