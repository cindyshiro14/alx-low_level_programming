#include "lists.h"

/**
 * list_len - This fnctn returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
