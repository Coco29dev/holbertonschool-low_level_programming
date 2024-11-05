#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function prints the string
 * pointed to by `s` using recursion.
 * It prints each character of the string one by one, and once the end of the
 * string is reached (indicated by the null byte '\0'), it prints a newline.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
