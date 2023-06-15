#include <unistd.h>
/**
 * main - a program that prints a statement and outputs in standard error
 * Return: 1 (Success)
 */
int main(void)
{
 write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
    return 1;
}
