#include <stdio.h>

/**
 * largest_prime_factor - Function to find the largest prime factor
 * @num: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long num)
{
long factor = 2;
long largest_factor = 2;
while (num > 1)
{
if (num % factor == 0)
{
num /= factor;
largest_factor = factor;
}
else
{
factor++;
}
}
return (largest_factor);
}

int main(void)
{
long number = 612852475143;
long largest_factor;
largest_factor = largest_prime_factor(number);
printf("%ld\n", largest_factor);
return (0);
}
