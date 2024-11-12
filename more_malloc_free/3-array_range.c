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
for (i = 0; i < min; i++)
array[i] = array[0];
for (i = 0; i < max; i++)
array[i] = array[1];
return (array);
}
