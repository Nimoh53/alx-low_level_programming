#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 *@s: input
 *@accept: input
 *Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s && strchr(accept, *s))
{
count++;
s++;
}
return (count);
}
