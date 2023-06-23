#include <stdio.h>
#include "main.h"
/**
 * print_triangle - function to print a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
