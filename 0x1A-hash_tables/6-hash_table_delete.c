#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
return;

unsigned long int i;
hash_node_t *node, *temp;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
temp = node->next;
free(node->key);
free(node->value);
free(node);
node = temp;
}
}
free(ht->array);
free(ht);
}
