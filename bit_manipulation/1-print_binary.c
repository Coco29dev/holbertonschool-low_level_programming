#include "main.h"

/**
 * print_binary_helper - print number binary help recursion function
 * @n: number of binary
 * Return: nothing
 */

void print_binary_helper(unsigned long int n)
{
if (n == 0)
return;
print_binary_helper(n >> 1);
_putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary - print number binary
 * @n: number of binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
print_binary_helper(n);
}
