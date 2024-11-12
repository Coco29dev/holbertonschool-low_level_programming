#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cp_str;
unsigned int i; j; len1 = 0; len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++

if (cp_str == NULL)
return (NULL);
if (n >= len2)
n = len2;

