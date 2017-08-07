#include "holberton.h"

/**
 * *_strchr - locates the first occurence of a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
