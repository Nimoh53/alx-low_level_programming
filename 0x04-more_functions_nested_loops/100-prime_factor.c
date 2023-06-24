#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime number of the number 612852475143
 * Return: alwas 0 (Success)
 */
int main(void)
{
long x, naxf;
long number = 612852475143;
double square = sqrt(number);
for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
naxf = number / x;
}
}
printf("%ld\n", naxf);
return (0);
}
