#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9
 * Description: prints the numbers except 2 and 4
 * Return: The numbers except 2 and 4
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
putchar(x + '0');
}
}
putchar('\n');
}
