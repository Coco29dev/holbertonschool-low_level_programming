#include "lists.h"

/**
 * add_dnodeint_end - add a new node at end
 * @head: pointer to pointer
 * @n: const int
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last = *head;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
new_node->prev = last;
return (new_node);
}
