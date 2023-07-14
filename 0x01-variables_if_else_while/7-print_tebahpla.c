#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');
	return (0);
}
