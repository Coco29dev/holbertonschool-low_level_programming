#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of the list
 * @head: pointer to pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
