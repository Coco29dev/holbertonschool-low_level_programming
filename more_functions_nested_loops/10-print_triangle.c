#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle of size `size`
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
int a, b, c;
if (size <= 0)
{
_putchar('\n');
return;
}
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (c = 1; c <= a; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
