#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - exe. a function
 * @array: Array of int.
 * @size: Sizez of array
 * @action: Pointer of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
