#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: The name it prints
 * @f: The pointer to the function
 */
void print_name(char *name, void (*f)(char *));
{
if (name != NULL && f != NULL)
f(name);
}
