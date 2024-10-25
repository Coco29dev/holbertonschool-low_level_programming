#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */

void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
{
print_number(n);
if (n != 97)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n > 98)
{
for (; n > 98; n--)
{
print_number(n);
if (n != 99)
{
_putchar(',');
_putchar(' ');
}
}
}
print_number(98);
_putchar('\n');
}

