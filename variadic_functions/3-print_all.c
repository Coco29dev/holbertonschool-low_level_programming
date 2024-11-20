#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s;
float f;
char c;
int fi = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
format++;
c = va_arg(args, char);
printf("%c", c);
i = va_arg(args, unsigned int);
printf("%d", i);
f = va_arg(args, double);
printf("%f", f);
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
}
printf("\n");
va_end(args);
}
