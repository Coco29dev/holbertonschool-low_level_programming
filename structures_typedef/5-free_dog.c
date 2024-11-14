#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog.
 * @d: The dog to free.
 * Return: Nothing.
 * Description: This function frees
 * the memory allocated for the name and
 * owner of the dog, and then frees the
 * memory for the dog structure itself.
 * It ensures that all dynamically
 * allocated memory for the dog is properly
 * deallocated to prevent memory leaks.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return (NULL);
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
free(d);
}
