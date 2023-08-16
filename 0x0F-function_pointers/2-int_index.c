#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 * Return: (0)
 * or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
