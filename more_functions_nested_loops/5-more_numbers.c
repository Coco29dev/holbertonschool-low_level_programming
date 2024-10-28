#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * This function prints the numbers from 0 to 14,
 * followed by a newline, and repeats this process 10 times.
 * It uses _putchar only three times in the entire function.
 */

void more_numbers(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
