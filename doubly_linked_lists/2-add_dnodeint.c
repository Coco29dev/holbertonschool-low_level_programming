#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: pointer to pointer
 * @n: pointer to const string
 * Return: the address of the new element or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}
