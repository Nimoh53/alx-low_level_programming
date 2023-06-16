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
for (w = f + '0'; w <= '9'; w++)
{
if (w != f)
{
putchar(f);
putchar(w);
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
