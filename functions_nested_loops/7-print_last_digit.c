#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer from which to extract the last digit.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int n)
{
int c = n % 10;
if (c < 10)
{
c = -c;
}
_putchar(c + '0');
return (c);
}
