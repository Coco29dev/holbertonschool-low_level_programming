#include "lists.h"

/**
 * print_dlistint - print all elements of list
 * @h: head of list
 * Return: count
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
if (current == NULL)
{
return (count);
}
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
