#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: 0!
 */

int main(void)
{
int a = 0;
long j = 1, k = 2;
while (a < 50)
{
if (a == 0)
printf("%ld", j);
else if (a == 1)
printf("%ld", k);
else
{
k += j;
j = k - j;
printf("%ld", k);
}
++a;
}
printf("\n");
return (0);
}
