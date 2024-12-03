#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a special place
 * @h: pointer to pointer
 * @idx: index
 * @n: data
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current = *h;
unsigned int i = 0;
if (idx == 0)
return (add_dnodeint(h, n));
while (current != NULL && i < idx)
{
current = current->next;
i++;
}
if (current == NULL && i < idx)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (current == NULL)
{
return (add_dnodeint_end(h, n));
}
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
current->prev = new_node;
return (new_node);
}
