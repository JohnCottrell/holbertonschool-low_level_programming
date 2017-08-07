#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer destination of byte
 * @b: source for constant byte
 * @n: length or number of bytes of the memory area pointed to by s
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
