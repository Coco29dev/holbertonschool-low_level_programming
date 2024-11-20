#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
va_list args;
int ii = 0;
unsigned int i;
char *s;
float f;
char c;
va_start(args, format);
while (format[ii] != '\0')
ii++;
c = va_arg(args, int);
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
printf("\n");
va_end(args);
}
