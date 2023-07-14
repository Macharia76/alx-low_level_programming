#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lent, e, q;

	e = 'e';
	q = 'q';

	for (lent = 'a'; lent <= 'z'; lent++)
	{
		if (lent != e && lent != q)
			putchar(lent);
	}
	putchar('\n');

	return (0);
}
