#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description: This function takes two pointers to integers
 * and swaps the values they point to. After calling this function,
 * the value of the first integer will be the original value of the
 * second integer, and vice versa.
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
