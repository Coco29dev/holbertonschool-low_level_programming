#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Pointeur vers le tableau d'entier a inverser.
 * @n: Taille du tableau d'entiers.
 *
 * Description: Cette fonction prend un tableau d'entiers et inverse
 * son contenu
 */

void reverse_array(int *a, int n)
{
int s = 0;
int e = n - 1;
int t;
while (s < e)
{
t = a[s];
a[s] = a[e];
a[e] = t;
s++;
e--;
}
}
