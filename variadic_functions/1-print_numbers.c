#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers. If NULL, no separator
 * is printed.
 * @n: The number of integers passed to the function.
 * Description: This function prints the integers passed to it as variadic
 * arguments, separated by a specified separator string. If
 * the separator is NULL, no separator is printed between the
 * numbers. A new line is printed after all numbers are displayed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
if (separator != NULL && i > 0)
{
printf("%s", separator);
}
printf("%d", va_arg(args, unsigned int));
}
printf("\n");
va_end(args);
}
