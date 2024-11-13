#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the new dog_t structure, or NULL if the function fails
 *         (e.g., memory allocation failure).
 * Description: This function allocates memory for a new dog, initializes it
 * with the provided values for name, age, and owner, and returns a pointer
 * to the new dog_t structure. The function ensures that a copy of the name
 * and owner strings is stored, and handles memory allocation errors by
 * returning NULL and freeing any allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
}
new_dog->age = age;
return (new_dog);
}

