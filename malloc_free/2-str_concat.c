#include <stdlib.h>
#include <string.h>
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
int len1, len2, a;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
cp_str = malloc(len1 + len2 + 1);
if (cp_str == NULL)
return (NULL);
for (a = 0; a < len1; a++)
{
cp_str[a] = s1[a];
}
for (a = 0; a < len2; a++)
{
cp_str[len1 + a] = s2[a];
}
cp_str[len1 + len2] = '\0';
return (cp_str);
}
