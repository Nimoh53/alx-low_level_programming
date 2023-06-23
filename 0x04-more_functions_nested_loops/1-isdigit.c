#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @x: The number is checked
 * Return: 1 if the it's a numbrr and 0 if otherwise
 */
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
