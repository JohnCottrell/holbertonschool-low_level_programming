#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome, or 0 if not
 * @s: string to be examined
 * @start: beginning of string
 * @end: end of string
 * Return: int
 */
int is_palindrome(char *s)
{
	int end;

	end = _strlen_recursion(s) - 1;
	return (pd(0, end, s));
}

/**
 * pd - examines string to determine recursively if it is a palindrome
 * @start: beginning of string
 * @end: end of string
 * @s: string
 * Return: int
 */
int pd(int start, int end, char *s)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (pd((start + 1), (end - 1), s));
	}
}
