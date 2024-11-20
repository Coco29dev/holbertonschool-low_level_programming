#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s;
float f;
char c;
int fi = 1;
va_start(args, format);
while (format[i] != '\0')
{
if (!fi)
printf(", ");
fi = 0;
if (format[i] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[i] == 'i')
{
printf("%d", va_arg(args, int));
}
else if (format[i] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[i] == 's')
{
s = va_arg(args, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
i++;
}
printf("\n");
va_end(args);
}
