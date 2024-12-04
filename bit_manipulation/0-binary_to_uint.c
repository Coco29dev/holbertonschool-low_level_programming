#include "main.h"

/**
 * binary_to_uint - conversion
 * @b: chaine de caractere
 * Return: le resultat de la conversion
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int resultat = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
resultat = resultat * 2;
if (b[i] == '1')
{
resultat += 1;
}
i++;
}
return (resultat);
}
