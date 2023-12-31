#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function prints all elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: Nmber of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

count++;
h = h->next;
}

return (count);
}
