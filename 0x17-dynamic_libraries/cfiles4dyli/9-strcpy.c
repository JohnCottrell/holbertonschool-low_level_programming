#include <stdio.h>

/**
 * _strcpy - copies string, includes null byte
 * @dest: points to buffer to which string must be copied
 * @src: points to a string that is to be copied
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
