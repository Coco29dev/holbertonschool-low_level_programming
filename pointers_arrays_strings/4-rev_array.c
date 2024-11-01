#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @arr: Pointeur vers le tableau d'entier a inverser.
 * @size: Taille du tableau d'entiers.
 *
 * Description: Cette fonction prend un tableau d'entiers et inverse
 * son contenu
 */

void reverse_array(int *a, int n)
{
int s = 0;
int e = size - 1;
int t;
while (s > e)
{
t = arr[s];
arr[s] = arr[e];
arr[e] = t;
s++;
e--;
}
}
