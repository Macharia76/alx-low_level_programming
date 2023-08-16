#include "3-calc.h"

/**
 * op_add - It calculates the sum of two integers
 * @j: The first integer
 * @k: The second integer
 *
 * Return: sum of j and k
 */
int op_add(int j, int k)
{
	return (j + k);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @k: second integer
 *
 * Return: difference of j and k
 */
int op_sub(int j, int k)
{
	return (j - k);
}

/**
 * op_mul - calculates the product of two integers
 * @j: first integer
 * @k: second integer
 *
 * Return: product of j and k
 */
int op_mul(int j, int k)
{
	return (j * k);
}

/**
 * op_div - calculates the division of two integers
 * @j: The first integer
 * @k: The second integer
 *
 * Return: result of the division of j and k
 */
int op_div(int j, int k)
{
	return (j / k);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @j: first integer
 * @k: second integer
 *
 * Return: remainder of j divided k
 */
int op_mod(int j, int k)
{
	return (j % k);
}


