#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be examined
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (multi(n, 1));
}

/**
 * multi - multiplies the second argument
 * @n: number to be examined
 * @mul: multiplier
 * Return: int
 */
int multi(int n, int mul)
{
	if ((mul * mul) == n)
	{
		return (mul);
	}

	else if ((mul * mul) > n)
	{
		return (-1);
	}

	else
	{
		return (multi(n, (mul + 1)));
	}
}
