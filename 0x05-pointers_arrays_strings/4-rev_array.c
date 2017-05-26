#include "holberton.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, x, y;

	for (i = 0, y = (n - 1); i < y; i++, y--)
	{
		x = a[i];
		a[i] = a[y];
		a[y] = x;
	}
}
