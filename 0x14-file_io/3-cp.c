#include "holberton.h"

/**
 * cant_write - prints error message when n fails to create or to write to file
 * @n: file descriptor number
 * @str: name of file
 * Return: void
 */
void cant_write(int n, char *str)
{
	if (n == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
}

/**
 * cant_close_fd - prints error message upon failure to close descriptor
 * @fdv: file descriptor value
 * Return: void
 */
void cant_close_fd(int fdv)
{
	if (fdv == -1 || fdv == 0)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fdv);
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
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdfrom = open(argv[1], O_RDONLY);

	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == 0)
	{
		cant_write(fdto, argv[2]);
	}
	bytes_read = read(fdfrom, buf, 1024);
	bytes_written = write(fdto, buf, bytes_read);
	if (bytes_written == 0)
		cant_write(fdto, argv[2]);

	close(fdto);
	close(fdfrom);
	return (0);
}
