#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function as parameter on each element of array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
