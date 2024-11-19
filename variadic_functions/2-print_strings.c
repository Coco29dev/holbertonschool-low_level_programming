#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings. If NULL,
 * no separator is printed.
 * @n: The number of strings passed to the function.
 * Description: This function prints the strings passed as variadic
 * arguments, separated by the separator string. If the
 * separator is NULL, no separator is printed. If one of
 * the strings is NULL, (nil) is printed instead.
 * A new line is printed at the end.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
if (separator == NULL)
{
printf("(nil)");
}
if (separator != NULL && i > 0)
{
printf("%s", separator);
}
printf("%s", va_arg(args, char*));
}
printf("\n");
va_end(args);
}
