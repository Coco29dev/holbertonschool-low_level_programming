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
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
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
if (n < 10)
