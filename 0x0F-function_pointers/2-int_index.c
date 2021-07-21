#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Search for int.
 * @array: array of int.
 * @size: size of array
 * @cmp: function pointer
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j)
			{
				break;
			}
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
