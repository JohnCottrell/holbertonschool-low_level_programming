#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination for two strings
 * @src: source of string
 * @n: upper limit to number of bytes to be used from src
  * Return:  (dest);
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	for (i = 0; dest[i]; i++)
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	if (i < n)
	{
		dest[len + i + 1] = '\0';
	}
	return (dest);
}
