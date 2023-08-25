#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This function frees a list_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
