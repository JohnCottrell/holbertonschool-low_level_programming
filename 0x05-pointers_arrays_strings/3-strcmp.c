#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string, of two, to be compared in the length
 * @s2: second string, of two, to be compared
 * Return: int;
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2, i, n;

	len1 = 0;
	len2 = 0;

	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (i = 0; s2[i]; i++)
	{
		len2++;
	}
	if (len1 < 0)
	{
		n = len2 - len1;
	}
	else if (len1 > 0)
	{
		n = len1 - len2;
	}
	else
	{
		n = 0;
	}
	return (n);
}
