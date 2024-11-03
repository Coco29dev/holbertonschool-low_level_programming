#include <stdio.h>
#include "main.h"

/**
 * cap_string - Met en majuscule
 * la premiere lettre de chaque mot dans une string
 * @str: Pointeur vers la string a modifier
 *
 * Return: Pointeur vers la string modifie
 */

char *cap_string(char *str)
{
int i = 0;
if (str[0] != '\0')
{
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
}
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
i++;
}
return (str);
}
