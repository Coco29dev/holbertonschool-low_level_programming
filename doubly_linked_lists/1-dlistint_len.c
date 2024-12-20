#include "lists.h"

/**
 * dlistint_len - list all elements of list
 * @h: head of list
 * Return: count
 */


size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);
}
