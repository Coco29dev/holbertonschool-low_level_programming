#include "lists.h"

/**
 * add_node_end - add a new node at end
 * @head: pointer to pointer
 * @str: pointer to const string
 * Return: the new node
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->next = NULL;
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
return (new_node);
}
