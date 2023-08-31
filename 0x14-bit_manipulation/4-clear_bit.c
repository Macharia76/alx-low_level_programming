#include "main.h"

/**
 * clear_bit - A function that sets the value of a given bit to 0
 * @n: This is the pointer to the number to change
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

