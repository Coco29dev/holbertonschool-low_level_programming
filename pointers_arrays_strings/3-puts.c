#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and
 * prints each character to the standard output, followed by
 * a new line. The function does not return a value.
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
