#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and uses the control loop for, and the function putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char len;

	for (len = 'a'; len <= 'z'; len++)
		putchar(len);

	putchar('\n');
	return (0);
}
