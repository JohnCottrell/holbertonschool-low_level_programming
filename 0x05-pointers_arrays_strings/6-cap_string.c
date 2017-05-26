#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be processed
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;

	char x[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - ('a' - 'A');
			}
			else
			{
				for (j = 0; x[j]; j++)
				{
					if (s[i - 1] == x[j])
					{
						s[i] = s[i] - ('a' - 'A');
					}
				}
			}
		}
	}
	return (s);
}
