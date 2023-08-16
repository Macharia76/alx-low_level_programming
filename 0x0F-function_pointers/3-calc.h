#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*m)(int j, int k);
} op_t;

int op_add(int j, int k);
int op_sub(int j, int k);
int op_mul(int j, int k);
int op_div(int j, int k);
int op_mod(int j, int k);
int (*get_op_func(char *s))(int, int);

#endif

