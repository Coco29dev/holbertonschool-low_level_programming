#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compare deux chaines de carateres
 * @s1: Est la premiere chaine
 * @s2: Est la deuxieme chaine
 *
 * Return: < 0 si s1 est inferieur a s2,
 *          > 0 si s1 est superieur s2,
 *          0 si c'est egal
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return *s1 - *s2;
}
s1++;
s2++;
}
return *s1 - *s2;
}
