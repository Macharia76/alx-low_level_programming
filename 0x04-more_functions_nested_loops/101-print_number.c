#include "main.h"
#include <stdio.h>
/**
 * print_number - prints a given integer
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int j = n;

if (n < 0)
{
n *= -1;
j = n;
_putchar('_');
}
j /= 10;
print_number(j);
_putchar(unsigned int) n % 10 + '0');
}
