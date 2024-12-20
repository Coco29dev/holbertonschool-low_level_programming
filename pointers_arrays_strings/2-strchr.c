#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return ('\0');
}
