#include "lists.h"

/**
 * delete_dnodeint_at_index - delete nodes of list
 * @head: pointer to pointer
 * @index: index of the node
 * Return: value success (1 or -1)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = temp->next;
if (temp->next)
temp->next->prev = NULL;
free(temp);
return (1);
}
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (-1);
if (temp->prev)
temp->prev->next = temp->next;
if (temp->next)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
