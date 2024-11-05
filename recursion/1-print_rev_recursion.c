#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function uses recursion to print each character of the
 * string `s` in reverse order. The function works by calling itself for
 * the next character until it reaches the end of the string, at which point
 * it starts printing the characters as the recursion "unwinds".
 */


void _print_rev_recursion(char *s)
{
if (*s == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
