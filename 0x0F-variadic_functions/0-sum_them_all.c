#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: Sum or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list ar;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, const unsigned int);
	}
	va_end(ar);
	return (sum);
}
