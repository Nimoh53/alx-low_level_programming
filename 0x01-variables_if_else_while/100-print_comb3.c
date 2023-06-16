#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int f, w;
for (f = '0'; f < '9'; f++)
{
for (w = f + 1; w <= 9; w++)
{
if (w != f)
{
putchar(n);
putchar(m);
if (f == 8 && w == 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
