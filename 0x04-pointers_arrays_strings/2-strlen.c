#include "holberton.h"

/**
 * _strlen - returns the length of a string (similar to strlen)
 * @s: string to be measured
 * Return: len
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}
