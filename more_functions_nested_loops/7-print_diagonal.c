#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * If n is 0 or less, the function only prints a newline.
 */

void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
return;
}
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
