
#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int offset = -1;

	for (i = 0; needle[i]; i++)
	{
		for (; haystack[j]; j++)
		{
			if (haystack[j] == needle[i])
			{
				if (offset < 0)
					offset = j;
				j++;
				break;
			}
			offset = -1;
		}
		if (haystack[j] == '\0')
			return (haystack + offset);
	}
	return ('\0');
}
