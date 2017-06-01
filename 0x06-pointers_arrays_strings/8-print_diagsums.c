#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: points to the array
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l, r;

	l = 0;
	r = 0;

	for (i = 1; i < size; i++)
	{
		l += a[(size + 1) * i];
		r += a[(size - 1) * i];
/*		printf("l:%d, r:%d, i:%i\n", l, r, i);*/
	}
	printf("%d, %d\n", l, r);
}
