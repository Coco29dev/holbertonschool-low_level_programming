#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char* (if the string is NULL, print (nil) instead)
 * Any other character should be ignored.
 * Description: This function prints any number of arguments of different types
 * (char, integer, float, string) according to the format
 * specifiers given in the format string. If a string is NULL,
 * it prints "(nil)". A new line is printed at the end of the output.
 * Return: None
 */

void print_all(const char * const format, ...)
{
va_list args;
int num;
unsigned int i = 0;
char *s;
float f;
char c;
int fi = 1;
va_start(args, format);
while (format && format[i] != '\0')
{
if (!fi)
{
printf(", ");
}
fi = 0;
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, unsigned int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
if (s != NULL)
{
printf("%s", s);
}
break;
default:
break;
}
i++;
}
printf("\n");
va_end(args);
}
