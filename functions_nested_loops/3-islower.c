#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if a character is a lowercase letter.
 * @c: The character to be checked (passed as an int).
 *
 * Return: 1 if c is a lowercase letter (between 'a' and 'z'),
 *         0 otherwise.
 */

int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
