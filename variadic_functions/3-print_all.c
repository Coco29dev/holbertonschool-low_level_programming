#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the format string.
 * @format: A string representing the types of arguments passed to the function.
 * 'c' for char, 'i' for integer, 'f' for float, 's' for string.
 * Description: This function prints all the values provided as arguments,
 * depending on the format specified. If the string argument is NULL,
 * "(nil)" will be printed.
 * It uses variadic arguments and function pointers to handle each type.
 * A new line is printed at the end.
 */
void print_char(va_list args)
{
char c;
c = va_arg(args, int);
printf("%c", c);
}
void print_int(va_list args)
{
int i;
i = va_arg(args, int);
printf("%d", i);
}
void print_float(va_list args)
{
float f;
f = va_arg(args, double);
printf("%f", f);
}
void print_string(va_list args)
{
char *s;
s = va_arg(args, char *);
if (!s)
{
printf("(nil)");
return;
}
printf("%s", s);
}
void print_all(const char * const format, ...)
{
print_type types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_list args;
char *separator = "";
int i = 0;
int j = 0;
va_start(args, format);
while (format && format[i])
{
while (types[j].type)
{
if (*types[j].type == format[i])
{
printf("%s", separator);
types[j].f(args);
separator = ", ";
}
j++;
}
j = 0;
i++;
}
printf("\n");
va_end(args);
}
