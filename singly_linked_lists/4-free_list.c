#include "lists.h"

/**
 * free_list - free memory
 * @head: pointer to pointer
 * Return: nothing
 *
 */


void free_list(list_t *head)
{
list_t *current = head;
list_t *next_node;
while (current != NULL)
{
next_node = current->next;
free(current->str);
free(current);
current = next_node;
}
}
