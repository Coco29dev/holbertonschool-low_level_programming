#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square of size 'size'.
 * @size: The size of the square to be printed.
 *
 * If size is 0 or less, the function prints a newline.
 */

void print_square(int size)
{
int h, k;
if (size <= 0)
_putchar('\n');
else
{
for (h = 0; h < size; h++)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
