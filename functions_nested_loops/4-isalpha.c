#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic letter.
 * @c: The character to be checked (passed as an int).
 *
 * Return: 1 if c is a letter (either lowercase or uppercase),
 *         0 otherwise.
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
