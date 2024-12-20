#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the accepted bytes.
 *
 * Return: A pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
return (s);
}
}
s++;
}
return ('\0');
}
