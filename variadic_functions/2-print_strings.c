#include <stdio.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
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
if (separator == NULL)
{
printf("(nil)");
}
printf("%s", va_arg(args, char*));
}
printf("\n");
va_end(args);
}
