#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: A pointer to the first string to be compaired
 * @s2: A pointer to the second string to be compaired
 * Return: if strl < strl2, the negative difference of
 * the first unmatched characters.
 * if strl == strl, 0.
 * if strl > strl2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
