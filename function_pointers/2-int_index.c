#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to a function that compares an integer to another integer.
 * Return: -1
 * Description:
 * This function searches for an integer in the array using the comparison
 * function pointed to by 'cmp'. The function 'cmp' should return 0 if the
 * element does not match the condition and a non-zero value if it does.
 * It returns the index of the first element for which the comparison is
 * true. If no element matches, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
