#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be examined
 * @accept: contains bytes to be located
 * Return: unisgned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[j])
				break;
		}
		if (accept[y] == '\0')
			return (x);
	}
	return (0);
}
