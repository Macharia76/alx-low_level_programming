#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char lw;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (lw = 'a'; lw <= 'f'; lw++)
		putchar(lw);
	putchar('\n');

	return (0);
}
