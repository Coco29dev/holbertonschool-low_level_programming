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
int last_digit = n % 10;
if (last_digit < 10)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
