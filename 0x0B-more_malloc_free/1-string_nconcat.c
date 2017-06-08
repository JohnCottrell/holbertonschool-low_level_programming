#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string, comes first
 * @s2: second string, comes second, but only n bytes
 * @n: number of bytes of second string to be added
 * Return: pointer to newly appointed memory of NULL for failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int len1, len2, newlen, i, j, m, p;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			len2++;
	}
	if (n < len2)
		len2 = n;
	newlen = len1 + len2 + 1;
	newstring = malloc(newlen * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (m = 0; m < len1; m++)
		newstring[m] = s1[m];
	for (p = 0; p < len2; p++)
		newstring[p + m] = s2[p];
	newstring[len1 + len2] = '\0';
	return (newstring);
}
