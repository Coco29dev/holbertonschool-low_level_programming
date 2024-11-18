#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @action: A pointer to a function that takes an integer and returns void.
 *
 * Description:
 * This function iterates through each element of the array and applies the
 * function pointed to by 'action' on each element. The function 'action'
 * should perform an operation on the individual array elements.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
