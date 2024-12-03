#include "lists.h"

/**
 * get_dnodeint_at_index - return a nth node at doubly list
 * @head: pointer to pointer
 * @index: index of node
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
return (NULL);
while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (head);
}
