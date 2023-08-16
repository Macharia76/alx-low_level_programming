#include "function_pointers.h"

/**
 * int_index - It searches for an integer
 * @array: This is the array to search in
 * @size: The size of the array
 * @cmp: A pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array && cmp)
	{
		for (q = 0; q < size; q++)
		{
			if (cmp(array[q]) != 0)
				return (q);
		}
	}

	return (-1);
}

