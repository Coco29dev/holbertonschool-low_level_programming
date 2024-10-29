#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to print from the array.
 *
 * Description: This function takes a pointer to an array of integers
 * and prints the specified number of elements, separated by commas,
 * followed by a space. If n is zero, the function prints nothing.
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf("' ");
}
}
printf("\n");
}
