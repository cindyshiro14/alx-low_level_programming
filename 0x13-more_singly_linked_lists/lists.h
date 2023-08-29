#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer data
 * @next: points to the next node
 *
 * Description: Represents a node in a singly linked list.
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/* Function prototype for print_listint */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
