#include "holberton.h"

/**
 * _isalpha - check for alphabetic character
 * @c: Test the c variable
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	int result;

	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
