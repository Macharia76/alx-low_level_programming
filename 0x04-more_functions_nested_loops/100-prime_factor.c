#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
long m, maxn;
long num = 612852475143;
double sq = sqrt(num);

for (m = 1; m <= sq; m++)
{
if (num % m == 0)
{
maxn = num / m;
}
}
printf("%ld\n", maxn);
return (0);
}
