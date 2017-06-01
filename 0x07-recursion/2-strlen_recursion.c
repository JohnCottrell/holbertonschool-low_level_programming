#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (s[0] != '\0')
	{
		len++;
		return (len + _strlen_recursion(++s));
	}
	else
	{
		return (len);
	}
}
