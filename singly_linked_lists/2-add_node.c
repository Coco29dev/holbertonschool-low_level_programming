#include "lists.h"

/**
 * add_node - add a new node
 * @head: pointer to pointer
 * @str: pointer to const string
 * Return: the new node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
