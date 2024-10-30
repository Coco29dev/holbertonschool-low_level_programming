#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatene deux chaine de caracteres en utilisant n byte
 * @dest: pointeur vers la chaine de destination
 * @src: pointeur vers la chaine source
 * @n: Nombre max de char a copier de src
 * Return: Pointeur vers la chaine de destination dest, concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
	while (*dest != '\0')
{
	dest++;
}
	while (n > 0 && *src != '\0')
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
	*dest = '\0';
	return original_dest;
}
