#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: A pointer to the destination buffer where the string is copied.
 * @src: A pointer to the source string to be copied.
 *
 * Description: This function takes two pointers, one to the source
 * string and one to the destination buffer. It copies the string from
 * the source to the destination, including the null terminator. The
 * Return: A pointer to the destination string.
 * function returns a pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
