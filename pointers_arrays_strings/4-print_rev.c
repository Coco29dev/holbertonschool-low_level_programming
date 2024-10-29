#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and
 * prints the characters in reverse order to the standard output.
 * The function does not return a value.
 */

void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (length--; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
