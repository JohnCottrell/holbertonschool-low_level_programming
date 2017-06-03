#include "holberton.h"

/**
 * is_prime_number - returns 1 if input integer is prime, otherwise returns 0
 * @n: number to be examined
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (diviz(n, 2));
	}
}

/**
 * diviz - divides an integer to determine if it is prime
 * @n: number to be divided
 * @div: divisor
 * Return: int
 */
int diviz(int n, int div)
{
	if (div == n)
	{
		return (1);
	}

	else if (n % div == 0)
	{
		return (0);
	}

	else
	{
		return (diviz(n, (div + 1)));
	}
}
