#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * If n is 0 or less, the function only prints a newline.
 */

void print_line(int n)
{
int b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b < n; b++)
{
_putchar('_');
}
_putchar('\n');
}
}
