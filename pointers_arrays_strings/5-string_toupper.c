#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules d'une string en majuscules.
 * @str: Pointeur vers la string a modifier.
 *
 * Return: Pointeur vers la string modifie.
 *
 * Description: Cette fonction parcourt chaque caractere de la string et
 * convertit les lettres minuscules en lettres majuscules.
 */


char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
}
return (str);
}
