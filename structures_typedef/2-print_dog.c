#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to a struct dog to be printed.
 * Description: This function prints the members of the struct dog pointed
 * to by @d. If any member is NULL,
 *  it prints "(nil)" in place of the NULL
 * member. If @d is NULL, the function does nothing.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
