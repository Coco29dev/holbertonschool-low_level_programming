#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max, inclusive.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 * Return: A pointer to the newly created array, or NULL if min > max or malloc fails.
 */

int *array_range(int min, int max)
{
int *array;
int i, i_size;
if (min > max)
return (NULL);
i_size = max - min + 1;
array = malloc(sizeof(int) * i_size);
if (array == NULL)
return (NULL);
for (i = 0; i < i_size; i++)
array[i] =  min + 1;
return (array);
}
