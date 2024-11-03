#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copie les n premiers caracteres de src vers dest.
 * @dest: Pointeur vers la string de destination.
 * @src: Pointeur vers la string source.
 * @n: Nombre de caracteres a copier.
 *
 * Return: Pointeur vers la chaîne de destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
