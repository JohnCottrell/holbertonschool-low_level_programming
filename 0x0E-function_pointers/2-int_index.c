#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * Return: -1 for no matches or size less than or equal to zero, or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			check = (*cmp)(array[i]);
			if (check != 0)
			{
				return (i);
			}

		}
	}
	return (-1);
}
