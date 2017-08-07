#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * @c: Test the c variable
 * Return: 1 for uppercase, and 0 for anything else.
 */
int _isupper(int c)
{
	int result;

	if ((c > 64) && (c < 91))
	{
		result = 1;
	}

	else
	{
		result = 0;
	}
	return (result);
}
