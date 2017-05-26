#include "holberton.h"

/**
 * *leet - encodes a string into 1337 (leet)
 * @s: string to be encoded
 * Return: s
 */
char *leet(char *s)
{
	int i, j;

	char n[] = "4307143071";
	char l[] = "aeotlAEOTL";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; l[j]; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
