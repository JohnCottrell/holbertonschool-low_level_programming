#include "holberton.h"

/**
 * _islower - check for lowercase character
 * @c: Test the c variable
 *
 * Return: 1 for lowercase, otherwise 0.
 */
int _islower(int c)
{
	int result;

	if ((c > 96) && (c < 123))
	{
		result = 1;
	}

	else if ((c > 64) && (c < 91))
	{
		result = 0;
	}
	return (result);
}
