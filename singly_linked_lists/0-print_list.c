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
size_t len = 0;
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
len = 0;
while (current->str[len] != '\0')
{
len++;
}
printf("[%lu] %s\n", len, current->str);
}
current = current->next;
count++;
}
return (count);
}
