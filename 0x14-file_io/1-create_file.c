#include "holberton.h"

/**
 * create_file - function creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR, 0600)
		if (fd == -1)
			return (-1);

	for (len = 0; text_content[len]; len++)
		;
	write(fd, text_content, 1);

	return (1);
}
