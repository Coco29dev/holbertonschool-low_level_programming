#include "lists.h"

/**
 * print_list - print all elements of list
 * @h: head of list
 * Return: count
 *
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
if (current == NULL)
{
return (count);
}
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", current->len, current->str);
}
current =  current->next;
count++;
}
return (count);
}
