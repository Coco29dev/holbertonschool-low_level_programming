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
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
