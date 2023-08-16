#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - It executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: This is the size of the array
 * @action: A pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}

