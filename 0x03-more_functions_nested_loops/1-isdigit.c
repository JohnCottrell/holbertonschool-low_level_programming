#include "holberton.h"

/**
 * _isdigit - check for a digit 0 through 9
 * @c: Test the variable c to see if it is 0 through 9
 * Return: 1 for digit 0 through 9 and 0 for anything else
 */
int _isdigit(int c)
{
	int result;

	if ((c >= '0') && (c <= '9'))
	{
		result = 1;
	}

	else
	{
		result = 0;
	}
	return (result);
}
