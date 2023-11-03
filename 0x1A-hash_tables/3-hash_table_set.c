#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add or update
 * @value: Value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL, *current = NULL;

if (ht == NULL || key == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

/* Check if the key already exists, update its value */
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value); /* Free previous value */
current->value = strdup(value);
if (current->value == NULL)
return (0);
return (1);
}
current = current->next;
}

/* If the key doesn't exist, add a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return 0;
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
