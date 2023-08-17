#include "variadic_functions.h"

/**
 * sum_them_all - It calculates the sum of all its parameters
 * @y:This is the number of arguments passed to the function
 *
 * Return: Returns the resulting sum
 */
int sum_them_all(const unsigned int y, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, y);

	for (i = 0; i < y; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

