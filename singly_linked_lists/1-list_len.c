#include "lists.h"

/**
 * list_len - list all elements of list
 * @h: head of list
 * Return: count
 */


size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);
}
