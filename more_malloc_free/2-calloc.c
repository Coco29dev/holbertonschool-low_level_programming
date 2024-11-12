#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements to allocate.
 * @size: The size of each element in bytes.
 * Description: This function allocates memory
 *  for an array of `nmemb` elements, each of size
 * `size` bytes, and then initializes all of the allocated memory to zero. If
 * either `nmemb` or `size` is zero, the function returns NULL. If the memory
 * allocation fails, it returns NULL.
 * Return: A pointer to the allocated memory, or NULL if allocation fails or if
 * either `nmemb` or `size` is zero.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;
return (ptr);
}
