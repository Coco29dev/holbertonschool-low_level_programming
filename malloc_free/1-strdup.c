#include <stdlib.h>
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
char *cp_str;
int i, len = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
cp_str = malloc(sizeof(char) * (len + 1));
if (cp_str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
cp_str[i] = str[i];
}
cp_str[len] = '\0';
return (cp_str);
}
