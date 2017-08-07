#include "holberton.h"

/**
 * *_strcat - concatenates two strings, appends src to dest, overwrites null
 * @dest: destination for appended string
 * @src: origin of string to be appended
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i + 1] = '\0';
	return (dest);
}
