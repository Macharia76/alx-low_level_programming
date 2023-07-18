#include "main.h"

/**
 * print_time_table - Prints the times table of the input
 * Starting with 0.
 * @n: The value of table to be printed.
 */
void print_times_table(int k)
{
int num, mul, pro;
if (k >= 0 && k<=15)
{
for (num = 0; num <= k; num++)
{
_putchar('0');
for (mul = 1; mul <= k; mul++)
{
_putchar(',');
_putchar(' ');
pro = num * mul;
if (pro <= 99)
_putchar(' ');
if (pro >= 100)
{
_putchar((pro / 100) + '0');
_putchar(((pro / 10)) % 10 + '0');
}
else if (pro <= 99 && pro >= 10)
{
_putchar((pro / 10) + '0');
}
_putchar((pro % 10) + '0');
}
_putchar('\n');
}
}
}
