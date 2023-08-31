#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[z] - '0');
	}

	return (dec_val);
}

