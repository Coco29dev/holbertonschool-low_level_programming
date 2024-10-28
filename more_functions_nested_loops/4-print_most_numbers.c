#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success 1, otherwise -1.
 */

void print_most_numbers(void)
{
int j;
for (j = '0'; j <= '9'; j++)
if (j != '2' && j != '4')
_putchar(j);
_putchar('\n');
}
