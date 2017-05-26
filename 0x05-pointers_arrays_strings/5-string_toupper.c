#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @x: string to be changed
 * Return: char
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i]; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
	}
	return (x);
}
