#include "holberton.h"

/**
 * swap_int - swap the value of two integers *a amd *b
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x  = *a;
	y  = *b;

	*a = y;
	*b = x;
}
