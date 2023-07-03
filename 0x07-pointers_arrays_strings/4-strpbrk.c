#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return:Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *ptr = accept;
while (*ptr)
{
if (*s == *ptr)
{
return (s);
}
ptr++;
}
s++;
}
return (NULL);
}
