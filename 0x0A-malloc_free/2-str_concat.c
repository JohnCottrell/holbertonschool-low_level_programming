#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int len1, len2, newlen, i, j, m, n;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (i = 0; s1[i]; i++)
		{
			len1++;
		}
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (j = 0; s2[j]; j++)
		{
			len2++;
		}
	}
	newlen = len1 + len2 + 1;
	newstring = malloc(newlen * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (m = 0; m < len1; m++)
	{
		newstring[m] = s1[m];
	}
	for (n = 0; n < len2; n++)
	{
		newstring[n + m] = s2[n];
	}
	newstring[len1 + len2] = '\0';
	return (newstring);
}
