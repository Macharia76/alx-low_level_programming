#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: The name to print
 * @m: pointer to the printing function
 */
void print_name(char *name, void (*m)(char *))
{
	if (!name || !m)
		return;
	m(name);
}

