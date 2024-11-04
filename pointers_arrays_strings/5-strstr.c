#include <stdio.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)
{
char *a = haystack;
char *b = needle;
while (*a && *b && (*a == *b))
{
a++;
b++;
}
if (!*b)
{
return (haystack);
}
haystack++;
}
return ('\0');
}

