#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
{
_putchar(n + '0');
if (n < 97)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (; n > 98; n--)
{
_putchar(n + '0');
if (n > 99)
{
_putchar (',');
_putchar(' ');
}
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
