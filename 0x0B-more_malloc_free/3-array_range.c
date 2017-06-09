#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimum (included)
 * @max: maximum (included)
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *minmaxray;

	int size, i;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);
	minmaxray = malloc(size * sizeof(int));
	if (minmaxray == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		minmaxray[i] = min++;
	return (minmaxray);
}
