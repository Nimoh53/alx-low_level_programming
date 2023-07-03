#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
char *start = haystack;
char *substr = needle;
while (*haystack && *substr && *haystack == *substr)
{
haystack++;
substr++;
}
if (*substr == '\0')
{
return (start);
}
haystack = start + 1;
}
return (NULL);
}
