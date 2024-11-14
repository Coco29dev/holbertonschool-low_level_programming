#ifndef DOG_H
#define DOG_H

#include <unistd.h>
#include <stdio.h>

/**
 * struct dog - Structure to store information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description: This structure holds the basic information about a dog,
 * including its name, age, and the name of its owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
