#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatene deux chaines de caracteres
 * @dest: pointeur vers la chaine de destination qui sera modifiee
 * @src: pointeur vers la chaine source qui sera ajoute a la fin de dest
 *
 * Description: Cette fonction prend la chaibe src et l'ajoute
 *a la fin de la chaine dest
 * Return: Pointeur apres concatenation
 */

char *_strcat(char *dest, char *src)
{
char *original_dest = dest;
	while (*dest != '\0')
{
	dest++;
}
	while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (original_dest);
}
