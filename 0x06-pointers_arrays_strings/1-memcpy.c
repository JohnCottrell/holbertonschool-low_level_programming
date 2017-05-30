#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to be copied
 * @n: number of bytes from source memory area to be copied
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
