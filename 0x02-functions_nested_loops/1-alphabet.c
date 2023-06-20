#include "main.h"
/**
 * main - A program that prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for(i = 1; i <= 26; i++)
{
_putchar(alph[i]);
}
_putchar('\n');
return (0);
}
