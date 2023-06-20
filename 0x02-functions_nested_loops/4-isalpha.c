#include "main.h"
/**
 * _isalpha - Checks for alphabet character
 * @c: The character to be checked
 * Return: 1 for alphabet character or 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
{
return (1);
}
else
return (0);
}
