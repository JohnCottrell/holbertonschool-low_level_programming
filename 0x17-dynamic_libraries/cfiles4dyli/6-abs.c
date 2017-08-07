#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer i
 *
 * @i: compute the absolute value of int
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	int result;

	if (i > 0)
	{
		result = i;
	}
	else if (i < 0)
	{
		result = 0 - i;
	}
	else if (i == 0)
	{
		result = i;
	}
	return (result);
}
