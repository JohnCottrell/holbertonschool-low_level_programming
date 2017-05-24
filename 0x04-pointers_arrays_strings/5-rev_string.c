#include "holberton.h"

/**
 * rev_string - reverse a string
 *@s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char buf;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	len = len - 1;
	for (i = 0; i < len; i++)
	{
		buf = s[len];
		s[len] = s[i];
		s[i] = buf;
		len--;

		if (len == (len / 2))
		{
			break;
		}
	}

}
