#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 * Return: A pointer to the newly allocated memory that contains the
 * duplicate of the string. If str is NULL, return NULL. If
 * memory allocation fails, return NULL.
 */

char *_strdup(char *str)
{
int i;
char *cp_str;
if (str == NULL)
return (NULL);
cp_str = malloc((strlen(str) + 1) * sizeof(char));
if (cp_str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
cp_str[i] = str[i];
}
cp_str[strlen(str)] = '\0';
return (cp_str);
}
