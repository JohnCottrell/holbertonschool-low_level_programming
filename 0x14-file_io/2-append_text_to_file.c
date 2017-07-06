#include "holberton.h"

/**
 * append_text_to_file - function appends a text at the end of a file
 * @filename: name of the file to be written to
 * @text_content: NULL terminated string to add to the end of the file
 * Return: -1 if filename is NULL, inexistant, no permission, 1 if file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
