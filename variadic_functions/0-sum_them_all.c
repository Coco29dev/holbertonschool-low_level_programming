#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - Calculates the sum of all integers passed as arguments.
 * @n: The number of arguments to sum.
 *
 * Returns the sum of all the arguments passed. If no arguments are passed,
 * it returns 0.
 *
 * Return: The sum of all the arguments passed to the function, or 0 if no
 * arguments are provided.
 */


int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int total = 0;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
{
total += va_arg(args, unsigned int);
}
va_end(args);
return (total);
}
