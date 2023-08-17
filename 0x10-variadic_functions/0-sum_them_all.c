#include "variadic_functions.h"

/**
 * sum_them_all - It calculates the sum of all its parameters
 * @n:This is the number of arguments passed to the function
 *
 * Return: Returns the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (num = 0; num < n; num++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

