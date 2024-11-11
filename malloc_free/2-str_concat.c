#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenate two strings and return a pointer to the new string.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the newly allocated memory which contains the
 * concatenated string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *cp_str;
int i, cp_i = 0, len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
len++;
cp_str = malloc(sizeof(char) * len);
if (cp_str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
cp_str[cp_i++] = s1[i];
for (i = 0; s2[i]; i++)
cp_str[cp_i++] = s2[i];
return (cp_str);
}
