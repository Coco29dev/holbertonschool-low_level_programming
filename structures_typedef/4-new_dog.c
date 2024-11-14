#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 * Return: A pointer to the newly allocated memory that contains the
 * duplicate of the string. If str is NULL, return NULL. If
 * memory allocation fails, return NULL.
 */
char *_strdup(char *str)
{
char *cp_str;
int i, len = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
cp_str = malloc(sizeof(char) * (len + 1));
if (cp_str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
cp_str[i] = str[i];
}
cp_str[len] = '\0';
return (cp_str);
}
/**
* new_dog - create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer on new dog or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = _strdup(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->age = age;
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog);
free(dog->owner);
return (NULL);
}
return (dog);
}
