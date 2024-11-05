#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Description: This function calculates the length of a string by recursively
 * calling itself, counting each character
 * until it reaches the null terminator '\0'.
 *
 * Return: The length of the string (excluding the null terminator).
 */

int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
return ((1) + _strlen_recursion(s + 1));
}

