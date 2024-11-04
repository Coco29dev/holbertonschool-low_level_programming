#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sums of
 * the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the square matrix.
 *
 * This function calculates and prints the sums of the two diagonals
 * of a square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
int d1 = 0;
int d2 = 0;
int i;
for (i = 0; i < size; i++)
{
d1 += *(a + i * size + i);
d2 += *(a + i * size + (size - 1 - i));
}
printf("%d, %d\n", d1, d2);
}
