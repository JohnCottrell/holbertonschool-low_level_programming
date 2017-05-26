#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; s[i]; i++)
		{
			for (j = 0; a[j]; j++)
			{
				if (s[i] == a[j])
				{
					s[i] = n[j];
					break;
				}
			}
		}
		return (s);
}
