#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cp_str;
unsigned int i, cp_i = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
cp_str = malloc(sizeof(char) * (len1 + n + 1));
if (cp_str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
cp_str[cp_i++] = s1[i];
for (i = 0; s2[i]; i++)
cp_str[cp_i++] = s2[i];
return (cp_str);
}
